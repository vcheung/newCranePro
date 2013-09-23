#ifndef ADJUSTTIMEWIDGET_H
#define ADJUSTTIMEWIDGET_H

#include <QWidget>
#include "ConfigureData.h"

namespace Ui {
class adjusttimewidget;
}

class adjusttimewidget : public QWidget
{
    Q_OBJECT

public:
    explicit adjusttimewidget(QWidget *parent = 0);
    ~adjusttimewidget();
    void ShowCurrentTime();

public slots:
    void SwitchToWorkSlot_Time();

signals:
    void SwitchToWorkSignal_Time();

private slots:
    void on_ModifyTime_clicked();

    void on_GetWord_clicked();

    void on_SureModifyWord_clicked();

    void on_SysParSureBtn_clicked();

private:
    Ui::adjusttimewidget *ui;
};

#endif // ADJUSTTIMEWIDGET_H
