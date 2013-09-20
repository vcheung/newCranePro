#ifndef SECRETINPUT_H
#define SECRETINPUT_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class SecretInput;
}

class SecretInput : public QWidget
{
    Q_OBJECT

public:
    explicit SecretInput(int type ,QWidget *parent = 0);
    ~SecretInput();
    void CreateErrorPrompter();
    QWidget *Prompter;

signals:
    void SwitchToWorkSignal_Sec();

    void SwitchToTimeSignal();
    void SwitchToSensorSignal();
    void SwitchToParaSignal();
    void SwitchToSysEleSignal();
    void SwitchToNetSignal();

public slots:
    void InvisiblePrompterSlot();

private slots:
    void on_SecretSureBtn_clicked();

    void on_SecretQuitBtn_clicked();

private:
    Ui::SecretInput *ui;
    int m_type;
};

#endif // SECRETINPUT_H
