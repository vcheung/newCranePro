#include "completework.h"
#include "ui_completework.h"

CompleteWork::CompleteWork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompleteWork)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

CompleteWork::~CompleteWork()
{
    delete ui;
}

void CompleteWork::on_SureBtn_clicked()
{
    emit WorkFinishedSig();
}

void CompleteWork::on_BackToWorkBtn_clicked()
{
    emit SwitchToWorkSig();
}
