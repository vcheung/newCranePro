#ifndef COMPLETEWORK_H
#define COMPLETEWORK_H

#include <QWidget>

namespace Ui {
    class CompleteWork;
}

class CompleteWork : public QWidget
{
    Q_OBJECT

public:
    explicit CompleteWork(QWidget *parent = 0);
    ~CompleteWork();

private slots:
    void on_SureBtn_clicked();

    void on_BackToWorkBtn_clicked();

private:
    Ui::CompleteWork *ui;

signals:
    void WorkFinishedSig();
    void SwitchToWorkSig();
};

#endif // COMPLETEWORK_H
