#include "workwidget.h"
#include "ui_workwidget.h"
#include <QSettings>
#include <QDateTime>
#include <QTimer>

QMutex FileMutex;   //ȫ�ֱ�����ʹ��ʱ��Ҫ����һ��
int mWorkingState;
long WorkCode;

workwidget::workwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workwidget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    //#���ô������ԣ�Qt::FramelessWindowHint�����ȥ��������������ֱ��F1��Ӣ��˵����
    setFixedSize(800,480);

    ui->ThreeGLab->setStyleSheet("background-color:red;");
    //#�������Ͻǵ�3G��ǩ�ı�����ɫ

    ui->MenuBtn->setText("�򿪲˵�");
    ui->FinishWorkBtn->setDisabled(true);
    ui->ManInputBtn->setStyleSheet("background-color:green");
    createMenuWidget();
    CoWork = new CompleteWork;

    istimeout = false;

    memset(SaveWorkInfo,0,3*sizeof(WorkInfo));
    memset(&mRecordState,0,sizeof(WRState));
    memset(&mBackWorkInfo,0,sizeof(BackWorkInfo));

    pWorkInfoFile = new BaseFile(WorkInfoFile);

    FileMutex.lock();
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[1],sizeof(WorkInfo),sizeof(WorkInfo));
    pWorkInfoFile->ReadData((char*)&SaveWorkInfo[2],sizeof(WorkInfo),2*sizeof(WorkInfo));
    FileMutex.unlock();

    UpdataNetWorkInfoSlot();    //��ʾ�ɹ���Ϣ
    ReadWorkStateConfig();  //�ж��Ƿ����жϵ磬�ϵ�ָ�
    ShowRecordState();  //��ʾĿǰ�洢״̬

    QTimer *WorkTimer = new QTimer;
    WorkTimer->start(1000);
    connect(WorkTimer,SIGNAL(timeout()),this,SLOT(updatetime()));

    connect(CoWork,SIGNAL(WorkFinishedSig()),this,SLOT(WorkFinished()));
    connect(CoWork,SIGNAL(SwitchToWorkSig()),this,SLOT(ToWorkWidget()));
    connect(ui->MenuBtn,SIGNAL(clicked()),this,SLOT(MenuShow()));

    connect(ui->ConDriverName,SIGNAL(currentIndexChanged(int)),this,SLOT(ComIndexChange(int)));
}

workwidget::~workwidget()
{
    delete ui;
}

void workwidget::createMenuWidget()
{

    menu=new QWidget(this);//////******
    QVBoxLayout *layout=new QVBoxLayout;
    QPushButton *timeAdjustBtn=new QPushButton(QString("ϵͳ����"));
    timeAdjustBtn->setStyleSheet("font-size : 22px");

    QPushButton *sensorParaBtn=new QPushButton(QString("���в���"));
    sensorParaBtn->setStyleSheet("font-size : 22px");

    QPushButton *ctrlParaBtn=new QPushButton(QString("���Ʋ���"));
    ctrlParaBtn->setStyleSheet("font-size : 22px");


    QPushButton *dianliangParaBtn=new QPushButton(QString("��������"));
    dianliangParaBtn->setStyleSheet("font-size : 22px");

    QPushButton *GThBtn=new QPushButton(QString("��������"));
    GThBtn->setStyleSheet("font-size : 22px");

    QPushButton *ShutDown=new QPushButton(QString("�˳�����"));
    ShutDown->setStyleSheet("font-size : 22px");

    layout->addWidget(timeAdjustBtn);
    layout->addWidget(sensorParaBtn);
    layout->addWidget(ctrlParaBtn);
    layout->addWidget(dianliangParaBtn);
    layout->addWidget(GThBtn);
    layout->addWidget(ShutDown);



    connect(timeAdjustBtn,SIGNAL(clicked()),this,SLOT(SwitchToTimeSecretSlot()));
    connect(sensorParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToSensorSecretSlot()));
    connect(ctrlParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToParaSecretSlot()));
    connect(dianliangParaBtn,SIGNAL(clicked()),this,SLOT(SwitchToSysEleSecretSlot()));
    connect(ShutDown,SIGNAL(clicked()),this,SLOT(ShutDown()));
    connect(GThBtn,SIGNAL(clicked()),this,SLOT(SwitchToGThSecretSlot()));


    menu->setLayout(layout);
    menu->setGeometry(QRect(580,70,200,350));
    menu->setStyleSheet(tr("QWidget{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,")
                        +tr("stop: 0 #bbbbbb, stop: 1.0 #c0c0c0);border-radius:15px;}")+tr("font-size : 22px"));
    menu->setVisible(false);
}

void workwidget::UpdataNetWorkInfoSlot()
{
    ui->ConDriverName->clear();
    for(int i=1; i<3; i++)
    {
        if(SaveWorkInfo[i].msWorkCode != 0)
            ui->ConDriverName->addItem(QString::fromLocal8Bit(SaveWorkInfo[i].DriverName));
        //ʹ��fromLocal8Bit()����,ʵ���˴ӱ����ַ���GB��Unicode��ת��,��ҪӦ���ڴ�������ʾ���������
    }
    ui->ConDriverName->setCurrentIndex(0);
    ComIndexChange(0);
}

void workwidget::ComIndexChange(int Index)
{
    QString mCabinNum;
    if(Index<0)
        return;
    ui->ConWorkNum->setText(QString::number(SaveWorkInfo[Index+1].msWorkCode));
    ui->ConShipName->setText(QString::fromLocal8Bit(SaveWorkInfo[Index+1].ShipName));
    mCabinNum.sprintf("%d",SaveWorkInfo[Index+1].CabinNum); //��CabinNum��ʽתΪ%d
    ui->ConCabinNum->setText(mCabinNum);
}

void workwidget::ReadWorkStateConfig()  //�ػ��������ȡ֮ǰ�Ĺ���״̬
{
    QSettings settings(IniAddr,QSettings::IniFormat);
    IsWorking = settings.value("WorkState/IsWorking").toBool();
    IsManInput = settings.value("WorkState/IsManInput").toBool();
    if(IsWorking)
    {
        ui->WorkNum->setText(settings.value("WorkState/WorkCode").toString());
        ui->DriverNameLab->setText(settings.value("WorkState/DriverName").toString());
        ui->ShipName->setText(settings.value("WorkState/ShipName").toString());

        on_StartWorkBtn_clicked();
    }
}

/************
 *���¿�ʼ������ť
 ************/
void workwidget::on_StartWorkBtn_clicked()
{
    ui->StartWorkBtn->setStyleSheet(tr("background-color:red;")+tr("font-size:22px;"));
    ui->StartWorkBtn->setText("������ҵ");
    ui->StartWorkBtn->setDisabled(true);
    ui->FinishWorkBtn->setDisabled(false);
    ui->QuPiBtn->setDisabled(true);
    ui->WorkNum->setDisabled(true);
    ui->ManInputBtn->setDisabled(true);
    mWorkingState = StartWork;
    if(IsManInput)
        ManInputCode();
    else
    {
        ExchangWorkArray(); //  ȷ����ǰ������Ϣ
        ShowCurrentWorkInfo(true);
    }
    IsWorking = true;
    WriteWorkStateConfig(); //��¼����״̬
}

void workwidget::ManInputCode()
{
    ui->ShipName->setText("");
    ui->DriverNameLab->setText("");
    WorkCode = ui->WorkNum->text().toLong();
    mBackWorkInfo.BWorkCode = WorkCode; //��¼��ǰ��ҵƱ���ڷ��ظ�������ʵʱ��Ϣ
    memset(mBackWorkInfo.DriverName,0,8);
    mBackWorkInfo.CabinNum = 0;
    memcpy(mBackWorkInfo.ShipName,"unknow",12);
}

void workwidget::ExchangWorkArray()
{
    if(ui->ConDriverName->currentIndex() == 0)
        memcpy(&SaveWorkInfo[0],&SaveWorkInfo[1],sizeof(WorkInfo));
    else
    {
        memcpy(&SaveWorkInfo[0],&SaveWorkInfo[2],sizeof(WorkInfo));
        memcpy(&SaveWorkInfo[2],&SaveWorkInfo[1],sizeof(WorkInfo));
        memcpy(&SaveWorkInfo[1],&SaveWorkInfo[0],sizeof(WorkInfo));
    }
    WriteWorkArrayToFile(true);
    WorkCode = SaveWorkInfo[0].msWorkCode;  //���浱ǰ��ҵƱ��Ϣ���ڴ洢��¼
    mBackWorkInfo.BWorkCode = WorkCode; //��¼��ǰ��ҵƱ���ڷ��ظ�������ʵʱ��Ϣ
    memcpy(mBackWorkInfo.DriverName,SaveWorkInfo[0].DriverName,8);
    memcpy(mBackWorkInfo.ShipName,SaveWorkInfo[0].ShipName,12);
    mBackWorkInfo.CabinNum = SaveWorkInfo[0].CabinNum;
    UpdataNetWorkInfoSlot();
}

void workwidget::ShowCurrentWorkInfo(bool m_bIsWork)
{
    if(m_bIsWork)
    {
        FileMutex.lock();
        pWorkInfoFile->WriteData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);
        FileMutex.unlock();
        ui->WorkNum->setText(QString::number(SaveWorkInfo[0].msWorkCode));
        ui->DriverNameLab->setText(QString::fromLocal8Bit(SaveWorkInfo[0].DriverName));
        ui->ShipName->setText(QString::fromLocal8Bit(SaveWorkInfo[0].ShipName));
    }
    else
    {
        ui->WorkNum->setText("");
        ui->DriverNameLab->setText("");
        ui->ShipName->setText("");
    }
}

void workwidget::WriteWorkStateConfig()
{
    QSettings settings(IniAddr, QSettings::IniFormat);  //��ǰĿ¼��ini�ļ�
    settings.beginGroup("WorkState");
    settings.setValue("IsManInput",IsManInput);
    settings.setValue("IsWorking",IsWorking);
    settings.setValue("WorkCode",ui->WorkNum->text());
    settings.setValue("ShipName",ui->ShipName->text());
    settings.setValue("DriverName",ui->ShipName->text());
    settings.endGroup();
}

void workwidget::WriteWorkArrayToFile(bool IsWriteCurrArray)
{
    FileMutex.lock();
    if(IsWriteCurrArray)
        pWorkInfoFile->WriteData((char*)&SaveWorkInfo[0],sizeof(WorkInfo),0);

    pWorkInfoFile->WriteData((char*)&SaveWorkInfo[1],sizeof(WorkInfo),sizeof(WorkInfo));
    pWorkInfoFile->WriteData((char*)&SaveWorkInfo[2],sizeof(WorkInfo),2*sizeof(WorkInfo));
    FileMutex.unlock();
}

void workwidget::ShowRecordState()
{
    uint RecordFlag = 0;
    if(mRecordState.TurnFlag == 0)
        RecordFlag = mRecordState.WritePos - mRecordState.ReadPos;
    else
        RecordFlag = MaxCounter - mRecordState.ReadPos + mRecordState.WritePos;
    ui->RecordState->setText(QString::number(RecordFlag));
}

void workwidget::updatetime()
{
    QDateTime time = QDateTime::currentDateTime() ;
    QString timestr = time.toString("yyyy��MM��dd��  hh:mm:ss");
    ui->TimeLab->setText(timestr);
}

void workwidget::on_FinishWorkBtn_clicked() //SwitchToCompleteWorkSlot
{
    CoWork->show();
    this->hide();
}

void workwidget::WorkFinished() //�������
{
    ui->StartWorkBtn->setStyleSheet(tr("background-color:green;")+tr("font-size:22px;"));
    ui->ManInputBtn->setStyleSheet("background-color:green;");
    ui->StartWorkBtn->setText("��ʼ��ҵ");
    ui->StartWorkBtn->setDisabled(false);
    ui->QuPiBtn->setDisabled(false);
    ui->FinishWorkBtn->setDisabled(true);
    CoWork->hide();
    this->show();
    ShowCurrentWorkInfo(false);
    mWorkingState = FinishWork;

    IsManInput = false;
    IsWorking = false;
    ui->WorkNum->setDisabled(false);
    ui->ManInputBtn->setDisabled(false);
    WriteWorkStateConfig(); //��¼����״̬
}

void workwidget::ToWorkWidget() //ȡ���������
{
    CoWork->hide();
    this->show();
}

//void workwidget::on_MenuBtn_clicked()   //����˵���ť��showMenu()
void workwidget::MenuShow()
{
    mutex.lock();
    timerid=startTimer(200);    //���Ƶ���˵���ť�Ƿ񳬹�200ms,#һ��Ҫ���õ�ʱ���istimeout��ֵ
    if(istimeout)   //���캯�������ã�istimeout��ʼֵΪtrue
    {
        if(this->menu->isVisible())
        {
            this->menu->setVisible(false);
            ui->MenuBtn->setText("�򿪲˵�");
            ui->MenuBtn->setStyleSheet("background-color: rgb(0,170,0)");
        }
        else
        {
            this->menu->setVisible(true);
            ui->MenuBtn->setText("�رղ˵�");
            ui->MenuBtn->setStyleSheet("background-color:rgb(255,0,0)");
        }
        istimeout=false;
    }
    mutex.unlock();
}

void workwidget::timerEvent(QTimerEvent *)
{
    killTimer(timerid);
    mutex.lock();
    istimeout=true;
    mutex.unlock();
}

void workwidget::on_QuPiBtn_clicked()
{
    mWorkingState = QuPi;
}

/***
 *�˵���ť�ۺ���
 ***************/
void workwidget::SwitchToTimeSecretSlot()
{
    emit SwitchToTimeSecretSignal();    //mainwindow�����Ӳ˵������źźͶ�Ӧ�ĺ���
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}

void workwidget::SwitchToSensorSecretSlot()
{
    emit SwitchToSensorSecretSlot();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}

void workwidget::SwitchToParaSecretSlot()
{
    emit SwitchToParaSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}

void workwidget::SwitchToSysEleSecretSlot()
{
    emit SwitchToSysEleSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}

void workwidget::ShutDown()
{
    emit ShutDownSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}

void workwidget::SwitchToGThSecretSlot()
{
    emit SwitchToGThSecretSignal();
    this->menu->setVisible(false);
    ui->MenuBtn->setText("�򿪲˵�");
    ui->MenuBtn->setStyleSheet("background-color:rgb(0,170,0)");
}
