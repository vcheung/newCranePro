#ifndef WORKWIDGET_H
#define WORKWIDGET_H

#include <QWidget>
#include "completework.h"
#include "ConfigureData.h"
#include "basefile.h"
#include "recordfile.h"

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
    CompleteWork *CoWork;

    void ReadWorkStateConfig();
    void ManInputCode();    //人工输入作业票
    void ExchangWorkArray();
    void ShowCurrentWorkInfo(bool m_bIsWork);
    void WriteWorkArrayToFile(bool IsWriteCurrArray);
    void WriteWorkStateConfig();    //记录工作状态

private:
    Ui::workwidget *ui;
    QWidget *menu;
    bool IsWorking;
    bool IsManInput;
    void timerEvent(QTimerEvent *);
    bool istimeout;

    WorkInfo SaveWorkInfo[3];
    WRState mRecordState;
    BackWorkInfo mBackWorkInfo;

    BaseFile *pWorkInfoFile;
    RecordFile *pMRecordState;

    QMutex mutex;
    int timerid;

public slots:
    void UpdataNetWorkInfoSlot();
    void ComIndexChange(int Index);
    void ShowRecordState();

    void updatetime();

    void WorkFinished();
    void ToWorkWidget();

    void MenuShow();

    void SwitchToTimeSecretSlot();
    void SwitchToSensorSecretSlot();
    void SwitchToParaSecretSlot();
    void SwitchToSysEleSecretSlot();
    void ShutDown();
    void SwitchToGThSecretSlot();

signals:
    void SwitchToTimeSecretSignal();
    void SwitchToSensorSecretSignal();
    void SwitchToParaSecretSignal();
    void SwitchToSysEleSecretSignal();
    void ShutDownSignal();
    void SwitchToGThSecretSignal();

private slots:
    void on_StartWorkBtn_clicked();
    void on_FinishWorkBtn_clicked();
//    void on_MenuBtn_clicked();
    void on_QuPiBtn_clicked();
};

#endif // WORKWIDGET_H
