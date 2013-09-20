#include "adjusttimewidget.h"
#include "ui_adjusttimewidget.h"

adjusttimewidget::adjusttimewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adjusttimewidget)
{
    ui->setupUi(this);
}

adjusttimewidget::~adjusttimewidget()
{
    delete ui;
}
