#include "basefile.h"
#include <QFile>
#include <QDebug>

BaseFile::BaseFile(QString m_FilePathName)
{
    FilePathName = m_FilePathName;
}

bool BaseFile::WriteData(char *pData, uint Length, qint64 DWpos)
{
    bool mWriteSuccessFlag = false;
    uint mWrote = 0;
    QFile WriteTestFile(FilePathName);
    if(!WriteTestFile.open(QIODevice::ReadWrite))
    {
        qDebug()<<"open file fail";
        return mWriteSuccessFlag;
    }
    WriteTestFile.seek(DWpos);  //将文件指标指向DWpos后
    mWrote=WriteTestFile.write(pData,Length);
    if(mWrote == Length)
        mWriteSuccessFlag = true;
    WriteTestFile.close();
    return mWriteSuccessFlag;
}

bool BaseFile::ReadData(char *pData, uint Length, qint64 DWpos)
{
    bool mReadSuccessFlag = false;
    uint mRead = 0;
    QFile ReadTestFile(FilePathName);
    if(!ReadTestFile.open(QIODevice::ReadWrite))
    {
        qDebug()<<"read file fail";
        return mReadSuccessFlag;
    }
    ReadTestFile.seek(DWpos);
    mRead = ReadTestFile.read(pData,Length);
    if(mRead == Length)
        mReadSuccessFlag = true;
    ReadTestFile.close();
    return mReadSuccessFlag;
}
