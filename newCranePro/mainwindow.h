#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "workwidget.h"     //��������
#include "secretinput.h"    //�����޸�ǰ��������
#include <QPropertyAnimation>   //��������
#include "adjusttimewidget.h"
#include "adjustparameter.h"

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
    adjusttimewidget *Adjust_tim;
    adjustparameter *Adjust_par;

    /****** �������ú��� ******/
    void CreateAnimation(QWidget *w,const QEasingCurve & easing,int coordx,int coordy);

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
    void ToWork();

    void ToSecretTime();
    void ToSecretSensor();
    void ToSecretPara();
    void ToSecretSysEle();
    void ShutDown();
    void ToGThsecSlot();

    void ToTimeSlot();
    void ToParaSlot();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
