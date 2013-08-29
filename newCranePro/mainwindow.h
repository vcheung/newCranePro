#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "workwidget.h"     //��������

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    workwidget *Work;
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
