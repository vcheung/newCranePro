#include "completework.h"
#include "ui_completework.h"

CompleteWork::CompleteWork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompleteWork)
{
    ui->setupUi(this);
}

CompleteWork::~CompleteWork()
{
    delete ui;
}
