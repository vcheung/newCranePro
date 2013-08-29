#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    //#设置窗口属性，Qt::FramelessWindowHint这个是去掉标题栏（可以直接F1看英文说明）

    /****** 界面  ******/
    Work = new workwidget;
    Work->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
