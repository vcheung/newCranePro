#ifndef WORKWIDGET_H
#define WORKWIDGET_H

#include <QWidget>

namespace Ui {
class workwidget;
}

class workwidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit workwidget(QWidget *parent = 0);
    ~workwidget();
    
private:
    Ui::workwidget *ui;
};

#endif // WORKWIDGET_H
