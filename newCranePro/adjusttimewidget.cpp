#include "adjusttimewidget.h"
#include "ui_adjusttimewidget.h"
#include <QSettings>
#include <QDateTime>
#include <QMessageBox>

char MachID= 0;
QString SysPassword;
adjusttimewidget::adjusttimewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adjusttimewidget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    ShowCurrentTime();
    QSettings settings(IniAddr, QSettings::IniFormat);
    MachID = settings.value("MachID/ID").toInt();
    ui->MachID->setText(QString::number( MachID ));
    SysPassword = settings.value("Password/Password").toString();

    connect(ui->BackToWorkBtn,SIGNAL(clicked()),this,SLOT(SwitchToWorkSlot_Time()));
}

adjusttimewidget::~adjusttimewidget()
{
    delete ui;
}

void adjusttimewidget::SwitchToWorkSlot_Time()
{
    emit SwitchToWorkSignal_Time();
}

void adjusttimewidget::ShowCurrentTime()
{
    QDateTime time = QDateTime::currentDateTime();
    ui->YearLineE->setText(time.currentDateTime().toString("yyyy"));
    ui->MonLineE->setText(time.currentDateTime().toString("MM"));
    ui->DayLineE->setText(time.currentDateTime().toString("dd"));
    ui->HourLineE->setText(time.currentDateTime().toString("hh"));
    ui->MinLineE->setText(time.currentDateTime().toString("mm"));
    ui->SecLineE->setText(time.currentDateTime().toString("ss"));
}

void adjusttimewidget::on_ModifyTime_clicked()
{
    QString TimeText;
    TimeText = "date"
            +ui->YearLineE->text()
            +ui->MonLineE->text()
            +ui->DayLineE->text()
            +ui->HourLineE->text()
            +ui->MinLineE->text();
    //qt调用linux系统命令修改系统时间
    system(TimeText.toLatin1().data());
    //强制写入到CMOS
    system("hwclock -w");
}

void adjusttimewidget::on_GetWord_clicked()
{
    QSettings settings(IniAddr,QSettings::IniFormat);
    SysPassword = settings.value("Password/Password").toString();
    ui->OldPasswordLineE->setText(SysPassword);
}

void adjusttimewidget::on_SureModifyWord_clicked()
{
    if((ui->NewPasswordLineE->text()==ui->NewPassword2LineE->text())&&
            (ui->NewPasswordLineE->text()!="")&&(ui->NewPassword2LineE->text()!=""))
    {
        QSettings settings(IniAddr,QSettings::IniFormat);
        //新的组：Password
        settings.beginGroup("Password");
        //Key=Password,Value=ui->NewPassword2LineE->text()
        settings.setValue("Password",ui->NewPassword2LineE->text());
        settings.endGroup();
        SysPassword = ui->NewPasswordLineE->text();
        QMessageBox::about(this,"警告","<font color='red' size=20>密码修改成功</font>");
    }
    else
    {
        QMessageBox::about(this,"警告","<font color='red' size = 20>密码输入有误</font>");
    }
    ui->NewPasswordLineE->clear();
    ui->NewPassword2LineE->clear();
}

void adjusttimewidget::on_SysParSureBtn_clicked()
{
    MachID = ui->MachID->text().toInt();
    QSettings settings(IniAddr,QSettings::IniFormat);
    settings.beginGroup("MachID");
    settings.setValue("ID",ui->MachID->text());
    settings.endGroup();
}
