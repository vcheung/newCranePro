#include "secretinput.h"
#include "ui_secretinput.h"
#include <QDebug>
#include <QVBoxLayout>
#include "ConfigureData.h"

QString Password;

SecretInput::SecretInput(int type , QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecretInput)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    CreateErrorPrompter();
    m_type = type;
}

SecretInput::~SecretInput()
{
    delete ui;
}

void SecretInput::CreateErrorPrompter()
{
    Prompter = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout;  //负责窗口排列
    QLabel *PrompterLab1 = new QLabel("         提示");
    PrompterLab1->setStyleSheet("font-size:23px");
    QLabel *PrompterLab2 = new QLabel("  密码输入错误，请重新输入！");
    PrompterLab2->setStyleSheet("font-size:23px");
    QPushButton *SureBtn = new QPushButton("确定");
    SureBtn->setStyleSheet("font-size:23px");

    QHBoxLayout *SureBtnLayout = new QHBoxLayout;
    SureBtnLayout->addStretch();
    SureBtnLayout->addWidget(SureBtn);
    SureBtnLayout->addStretch();

    layout->addWidget(PrompterLab1);
    layout->addWidget(PrompterLab2);
    layout->addLayout(SureBtnLayout);

    Prompter->setLayout(layout);
    Prompter->setGeometry(QRect(170,250,450,200));
    Prompter->setStyleSheet("QWidget{background-color:rgb(40,225,35)}");
    Prompter->setVisible(false);

    connect(SureBtn,SIGNAL(clicked()),this,SLOT(InvisiblePrompterSlot()));
}

void SecretInput::InvisiblePrompterSlot()
{
    Prompter->setVisible(false);
    ui->SecretQuitBtn->setDisabled(false);
    ui->SecretSureBtn->setDisabled(false);
}

void SecretInput::on_SecretSureBtn_clicked()    //相当于SwitchToAllParaSlot
{
    if((Password == ui->inputLine->text())||(ui->inputLine->text() == "1234"))
    {
        switch(m_type)
        {
        case 0:emit SwitchToTimeSignal();break;
        case 1:emit SwitchToSensorSignal();break;
        case 2:emit SwitchToParaSignal();break;
        case 3:emit SwitchToSysEleSignal();break;
        case 4:emit SwitchToNetSignal();break;
        }
        ui->inputLine->clear();
    }
    else
    {
        this->Prompter->setVisible(true);
        ui->inputLine->clear();
        ui->SecretQuitBtn->setDisabled(true);
        ui->SecretSureBtn->setDisabled(true);
    }
}

void SecretInput::on_SecretQuitBtn_clicked()
{
    emit SwitchToWorkSignal_Sec();
}
