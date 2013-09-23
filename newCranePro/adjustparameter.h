#ifndef ADJUSTPARAMETER_H
#define ADJUSTPARAMETER_H

#include <QWidget>
#include "ConfigureData.h"

namespace Ui {
class adjustparameter;
}

class adjustparameter : public QWidget
{
    Q_OBJECT

public:
    explicit adjustparameter(QWidget *parent = 0);
    ~adjustparameter();

signals:
    void SwitchToWorkSignal_Para();

private slots:
    void on_BackToWorkBtn_clicked();

private:
    Ui::adjustparameter *ui;
    WRState mReState;
};

#endif // ADJUSTPARAMETER_H
