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

private:
    Ui::workwidget *ui;
    QWidget *menu;

    WorkInfo SaveWorkInfo[3];
    WRState mRecordState;
    BackWorkInfo mBackWorkInfo;

    BaseFile *pWorkInfoFile;
    RecordFile *pMRecordState;

public slots:
    void UpdataNetWorkInfoSlot();
    void ComIndexChange(int Index);
};

#endif // WORKWIDGET_H
