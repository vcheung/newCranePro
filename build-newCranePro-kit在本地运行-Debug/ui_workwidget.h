/********************************************************************************
** Form generated from reading UI file 'workwidget.ui'
**
** Created: Thu Aug 29 15:48:28 2013
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workwidget
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QWidget *workwidget)
    {
        if (workwidget->objectName().isEmpty())
            workwidget->setObjectName(QString::fromUtf8("workwidget"));
        workwidget->resize(800, 480);
        workwidget->setAutoFillBackground(false);
        groupBox = new QGroupBox(workwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(0, 0, 800, 60));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        QBrush brush3(QColor(117, 116, 118, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        QBrush brush4(QColor(167, 166, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        groupBox->setPalette(palette);
        groupBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(480, 40));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush5(QColor(255, 170, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush5);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush7(QColor(255, 212, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        QBrush brush8(QColor(127, 85, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(170, 113, 170, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_5->setPalette(palette1);
        label_5->setAutoFillBackground(true);

        horizontalLayout->addWidget(label_5);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        QBrush brush11(QColor(127, 127, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(170, 170, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label->setPalette(palette2);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_2->setPalette(palette3);
        label_2->setFont(font);
        label_2->setAutoFillBackground(true);

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_3->setPalette(palette4);
        label_3->setFont(font);
        label_3->setAutoFillBackground(true);

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_4->setPalette(palette5);
        label_4->setFont(font);
        label_4->setAutoFillBackground(true);

        horizontalLayout->addWidget(label_4);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush13(QColor(0, 170, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(127, 213, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(63, 191, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(0, 85, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(0, 113, 170, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush18(QColor(127, 212, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        label_6->setPalette(palette6);
        label_6->setFont(font);
        label_6->setAutoFillBackground(true);

        horizontalLayout->addWidget(label_6);

        label_5->raise();
        label_6->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        label_3->raise();

        retranslateUi(workwidget);

        QMetaObject::connectSlotsByName(workwidget);
    } // setupUi

    void retranslateUi(QWidget *workwidget)
    {
        workwidget->setWindowTitle(QApplication::translate("workwidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_5->setText(QString());
        label->setText(QApplication::translate("workwidget", "\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("workwidget", "\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("workwidget", "3G", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("workwidget", "\347\224\265\351\207\217", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class workwidget: public Ui_workwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWIDGET_H
