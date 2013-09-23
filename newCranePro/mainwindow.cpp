#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    //#���ô������ԣ�Qt::FramelessWindowHint�����ȥ��������������ֱ��F1��Ӣ��˵����

    /****** ����  ******/
    Work = new workwidget;
    Work->show();

    /****** �˵� ******/
    Adjust_tim = new adjusttimewidget;
    Adjust_par = new adjustparameter;

    /****** �����޸�ǰ����������� ******/
    SecInTime = new SecretInput(0);
    SecInSensor = new SecretInput(1);
    SecInPara = new SecretInput(2);
    SecInSysEle = new SecretInput(3);
    SecInTG = new SecretInput(4);

    /*********����workwidget��menu���źźͶ�Ӧ�Ĳۺ���***/
    connect(Work,SIGNAL(SwitchToTimeSecretSignal()),this,SLOT(ToSecretTime())); //ʱ�����ý���
    connect(Work,SIGNAL(SwitchToSensorSecretSignal()),this,SLOT(ToSecretSensor()));
    connect(Work,SIGNAL(SwitchToParaSecretSignal()),this,SLOT(ToSecretPara()));
    connect(Work,SIGNAL(SwitchToSysEleSecretSignal()),this,SLOT(ToSecretSysEle()));
    connect(Work,SIGNAL(SwitchToGThSecretSignal()),this,SLOT(ToGThsecSlot()));
    connect(Work,SIGNAL(ShutDownSignal()),this,SLOT(ShutDown()));

    connect(SecInTime,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));    //������������С�ȡ������ť�����ص�work����
    connect(SecInSensor,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInPara,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInSysEle,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));
    connect(SecInTG,SIGNAL(SwitchToWorkSignal_Sec()),this,SLOT(ToWork()));

    connect(SecInTime,SIGNAL(SwitchToTimeSignal()),this,SLOT(ToTimeSlot()));
    connect(SecInPara,SIGNAL(SwitchToParaSignal()),this,SLOT(ToParaSlot()));

    connect(Adjust_tim,SIGNAL(SwitchToWorkSignal_Time()),this,SLOT(ToWork()));
    connect(Adjust_par,SIGNAL(SwitchToWorkSignal_Para()),this,SLOT(ToWork()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/****** ����Ч�� ******/
void MainWindow::CreateAnimation(QWidget *w, const QEasingCurve &easing, int coordx, int coordy)
{
    if(NULL == animation)
    {
        animation = new QPropertyAnimation(w,"geometry");
    }
    animation->setTargetObject(w);
    animation->setDuration(300);
    animation->setStartValue(QRect(coordx,coordy,150,100));
    animation->setEndValue(QRect(0,0,800,480));
    animation->setEasingCurve(easing);
    animation->start();
}

/*******
 *workwidget�������ӵĲۺ���
 **************************/
void MainWindow::ToSecretTime() //ʱ���������
{
    SecInTime->show();
//    CreateAnimation(SecInTime,Anim4,800,480);
    Work->hide();
}

void MainWindow::ToSecretSensor()
{
    SecInSensor->show();
//    CreateAnimation(SecInSensor,Anim5,800,480);
    Work->hide();
}

void MainWindow::ToSecretPara()
{
    SecInPara->show();
//    CreateAnimation(SecInPara,Anim2,800,480);
    Work->hide();
}

void MainWindow::ToSecretSysEle()
{
    SecInSysEle->show();
//    CreateAnimation(SecInSysEle,Anim1,800,480);
    Work->hide();
}

void MainWindow::ToGThsecSlot() //3Gδ���
{
    SecInTG->show();
//    CreateAnimation();
    Work->hide();
}

void MainWindow::ShutDown()
{
    qApp->exit();
}

void MainWindow::ToWork()
{

    SecInTG->hide();
    SecInTime->hide();
    SecInSensor->hide();
    SecInPara->hide();
    SecInSysEle->hide();
    Adjust_tim->hide();
    Adjust_par->hide();
    Work->show();
//    CreateAnimation(Work,Anim0,800,480);
}

/******
 * ����ת��
 *****************/
void MainWindow::ToTimeSlot()
{
    Adjust_tim->show();
    Adjust_tim->ShowCurrentTime();
    SecInTime->hide();
}

void MainWindow::ToParaSlot()
{
    Adjust_par->show();
    SecInPara->hide();
}
