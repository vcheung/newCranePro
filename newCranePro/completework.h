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

private:
    Ui::CompleteWork *ui;
};

#endif // COMPLETEWORK_H
