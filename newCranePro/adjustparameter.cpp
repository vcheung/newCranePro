#include "adjustparameter.h"
#include "ui_adjustparameter.h"
#include "ConfigureData.h"

adjustparameter::adjustparameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adjustparameter)
{
    ui->setupUi(this);
    memset(&mReState,0,sizeof(WRState));
}

adjustparameter::~adjustparameter()
{
    delete ui;
}

void adjustparameter::on_BackToWorkBtn_clicked()
{
    emit SwitchToWorkSignal_Para();
}
