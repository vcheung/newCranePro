/********************************************************************************
** Form generated from reading UI file 'workwidget.ui'
**
** Created: Wed Aug 28 11:49:02 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWIDGET_H
#define UI_WORKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workwidget
{
public:

    void setupUi(QWidget *workwidget)
    {
        if (workwidget->objectName().isEmpty())
            workwidget->setObjectName(QString::fromUtf8("workwidget"));
        workwidget->resize(400, 300);

        retranslateUi(workwidget);

        QMetaObject::connectSlotsByName(workwidget);
    } // setupUi

    void retranslateUi(QWidget *workwidget)
    {
        workwidget->setWindowTitle(QApplication::translate("workwidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class workwidget: public Ui_workwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWIDGET_H
