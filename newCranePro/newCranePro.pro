#-------------------------------------------------
#
# Project created by QtCreator 2013-08-21T16:02:54
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = newCranePro
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    workwidget.cpp \
    completework.cpp \
    basefile.cpp \
    recordfile.cpp

HEADERS  += mainwindow.h \
    workwidget.h \
    completework.h \
    ConfigureData.h \
    basefile.h \
    recordfile.h

FORMS    += mainwindow.ui \
    workwidget.ui \
    completework.ui
