#ifndef CONFIGUREDATA_H
#define CONFIGUREDATA_H
#include <QMutex>

#define WorkInfoFile "WorkInfo.dat"
#define IniAddr  "Configure.ini"
#define MaxCounter 20000

typedef struct
{
    long msWorkCode;
    char ShipName[13];
    char DriverName[9];
    char CabinNum;
}WorkInfo;

typedef struct
{
    long BWorkCode;
    char ShipName[13];
    char DriverName[9];
    char CabinNum;
    char CurrNetWeight[3];
    char BreakDownInf;
    char CurrEle[5];
}BackWorkInfo;

//�洢���ݽṹ
typedef struct
{
    int WritePos;
    int ReadPos;
    char TurnFlag;
}WRState,*pWRState;

enum WorkingState   //#����״̬��ö��
{
    Normal = 1,
    StartWork = 2,
    FinishWork = 3,
    NotWork =4,
    QuPi = 5
};

extern QMutex FileMutex;
extern int mWorkingState;
extern long WorkCode;

extern QString SysPassword;
extern char MachID;

#endif // CONFIGUREDATA_H
