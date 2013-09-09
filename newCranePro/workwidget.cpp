#include "workwidget.h"
#include "ui_workwidget.h"

QMutex FileMutex;   //ȫ�ֱ�����ʹ��ʱ��Ҫ����һ��

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

void workwidget::ReadWorkStateConfig()
{

}
