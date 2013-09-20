#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "workwidget.h"     //工作界面
#include "secretinput.h"    //参数修改前输入密码
#include <QPropertyAnimation>   //动画设置

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

    /****** 动画设置函数 ******/
    void CreateAnimation(QWidget *w,const QEasingCurve & easing,int coordx,int coordy);
    void ToWork();

    SecretInput *SecInTime;
    SecretInput *SecInSensor;
    SecretInput *SecInPara;
    SecretInput *SecInSysEle;
    SecretInput *SecInTG;

    QPropertyAnimation *animation ;
    QEasingCurve Anim0; //for animation
    QEasingCurve Anim1;
    QEasingCurve Anim2;
    QEasingCurve Anim3;
    QEasingCurve Anim4;
    QEasingCurve Anim5;

public slots:
    void ToSecretTime();
    void ToSecretSensor();
    void ToSecretPara();
    void ToSecretSysEle();
    void ShutDown();
    void ToGThsecSlot();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
