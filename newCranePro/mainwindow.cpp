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
    Work = new Workwidget;
}

MainWindow::~MainWindow()
{
    delete ui;
}
