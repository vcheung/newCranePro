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
    void createMenuWidget();

    
private:
    Ui::workwidget *ui;
    QWidget *menu;
};

#endif // WORKWIDGET_H
