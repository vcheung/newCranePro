#ifndef CONFIGUREDATA_H
#define CONFIGUREDATA_H
#include <QMutex>

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

typedef struct
{
    int WritePos;
    int ReadPos;
    char TurnFlag;
}WRState,*pWRState;

extern QMutex FileMutex;

#endif // CONFIGUREDATA_H
