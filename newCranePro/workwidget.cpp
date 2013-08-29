#include "workwidget.h"
#include "ui_workwidget.h"

workwidget::workwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workwidget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    //#设置窗口属性，Qt::FramelessWindowHint这个是去掉标题栏（可以直接F1看英文说明）
}

workwidget::~workwidget()
{
    delete ui;
}
