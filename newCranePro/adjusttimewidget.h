#ifndef ADJUSTTIMEWIDGET_H
#define ADJUSTTIMEWIDGET_H

#include <QWidget>

namespace Ui {
class adjusttimewidget;
}

class adjusttimewidget : public QWidget
{
    Q_OBJECT

public:
    explicit adjusttimewidget(QWidget *parent = 0);
    ~adjusttimewidget();

private:
    Ui::adjusttimewidget *ui;
};

#endif // ADJUSTTIMEWIDGET_H
