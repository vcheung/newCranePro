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

    WorkInfo SaveWorkInfo[3];
    WRState mRecordState;
    BackWorkInfo mBackWorkInfo;

    BaseFile *pWorkInfoFile;
    RecordFile *pMRecordState;

public slots:
    void UpdataNetWorkInfoSlot();
    void ComIndexChange(int Index);
    void ShowRecordState();

    void updatetime();

    void WorkFinished();
    void ToWorkWidget();

private slots:
    void on_StartWorkBtn_clicked();
    void on_FinishWorkBtn_clicked();
};

#endif // WORKWIDGET_H
