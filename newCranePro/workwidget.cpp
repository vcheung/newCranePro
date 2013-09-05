#include "workwidget.h"
#include "ui_workwidget.h"

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
