/********************************************************************************
** Form generated from reading UI file 'adjustparameter.ui'
**
** Created: Mon Sep 23 15:49:31 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTPARAMETER_H
#define UI_ADJUSTPARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adjustparameter
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *RecordPosLab;
    QLabel *SendPosLab;
    QLabel *OverflowFlagLab;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *ControlValue;
    QLineEdit *InstantValue;
    QLineEdit *AlarmValue;
    QLineEdit *SlowValue;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *InstantDelay;
    QLineEdit *SlowDelay;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *ControlDelay;
    QLabel *label_19;
    QPushButton *SureBtn;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *adjustparameter)
    {
        if (adjustparameter->objectName().isEmpty())
            adjustparameter->setObjectName(QString::fromUtf8("adjustparameter"));
        adjustparameter->resize(800, 480);
        groupBox = new QGroupBox(adjustparameter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 300, 350));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(188, 188, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(221, 221, 247, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(94, 94, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(125, 125, 160, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox->setPalette(palette);
        groupBox->setAutoFillBackground(true);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(75, 20, 150, 50));
        QPalette palette1;
        QBrush brush7(QColor(255, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        QBrush brush8(QColor(120, 120, 120, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        label->setPalette(palette1);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 100, 100, 50));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 150, 100, 50));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 200, 100, 50));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        RecordPosLab = new QLabel(groupBox);
        RecordPosLab->setObjectName(QString::fromUtf8("RecordPosLab"));
        RecordPosLab->setGeometry(QRect(100, 110, 120, 30));
        RecordPosLab->setFrameShape(QFrame::Box);
        RecordPosLab->setLineWidth(2);
        SendPosLab = new QLabel(groupBox);
        SendPosLab->setObjectName(QString::fromUtf8("SendPosLab"));
        SendPosLab->setGeometry(QRect(100, 160, 120, 30));
        SendPosLab->setFrameShape(QFrame::Box);
        SendPosLab->setLineWidth(2);
        OverflowFlagLab = new QLabel(groupBox);
        OverflowFlagLab->setObjectName(QString::fromUtf8("OverflowFlagLab"));
        OverflowFlagLab->setGeometry(QRect(100, 210, 120, 30));
        OverflowFlagLab->setFrameShape(QFrame::Box);
        OverflowFlagLab->setLineWidth(2);
        groupBox_2 = new QGroupBox(adjustparameter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 0, 500, 350));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox_2->setPalette(palette2);
        groupBox_2->setAutoFillBackground(true);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(175, 20, 150, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        label_2->setPalette(palette3);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 200, 100, 50));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 100, 100, 50));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 150, 100, 50));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 250, 100, 50));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        ControlValue = new QLineEdit(groupBox_2);
        ControlValue->setObjectName(QString::fromUtf8("ControlValue"));
        ControlValue->setGeometry(QRect(100, 160, 80, 30));
        InstantValue = new QLineEdit(groupBox_2);
        InstantValue->setObjectName(QString::fromUtf8("InstantValue"));
        InstantValue->setGeometry(QRect(100, 210, 80, 30));
        AlarmValue = new QLineEdit(groupBox_2);
        AlarmValue->setObjectName(QString::fromUtf8("AlarmValue"));
        AlarmValue->setGeometry(QRect(100, 110, 80, 30));
        SlowValue = new QLineEdit(groupBox_2);
        SlowValue->setObjectName(QString::fromUtf8("SlowValue"));
        SlowValue->setGeometry(QRect(100, 260, 80, 30));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(180, 150, 30, 50));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 250, 30, 50));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 100, 30, 50));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 200, 30, 50));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(430, 250, 30, 50));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(430, 150, 30, 50));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);
        InstantDelay = new QLineEdit(groupBox_2);
        InstantDelay->setObjectName(QString::fromUtf8("InstantDelay"));
        InstantDelay->setGeometry(QRect(350, 210, 80, 30));
        SlowDelay = new QLineEdit(groupBox_2);
        SlowDelay->setObjectName(QString::fromUtf8("SlowDelay"));
        SlowDelay->setGeometry(QRect(350, 260, 80, 30));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(250, 150, 100, 50));
        label_16->setFont(font1);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(250, 250, 100, 50));
        label_17->setFont(font1);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(250, 200, 100, 50));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);
        ControlDelay = new QLineEdit(groupBox_2);
        ControlDelay->setObjectName(QString::fromUtf8("ControlDelay"));
        ControlDelay->setGeometry(QRect(350, 160, 80, 30));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(430, 200, 30, 50));
        label_19->setFont(font1);
        label_19->setAlignment(Qt::AlignCenter);
        SureBtn = new QPushButton(adjustparameter);
        SureBtn->setObjectName(QString::fromUtf8("SureBtn"));
        SureBtn->setGeometry(QRect(350, 360, 100, 50));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        SureBtn->setFont(font2);
        BackToWorkBtn = new QPushButton(adjustparameter);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        BackToWorkBtn->setGeometry(QRect(680, 420, 100, 50));
        BackToWorkBtn->setFont(font2);

        retranslateUi(adjustparameter);

        QMetaObject::connectSlotsByName(adjustparameter);
    } // setupUi

    void retranslateUi(QWidget *adjustparameter)
    {
        adjustparameter->setWindowTitle(QApplication::translate("adjustparameter", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("adjustparameter", "\346\225\260\346\215\256\344\274\240\350\276\223\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("adjustparameter", "\350\256\260\345\275\225\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("adjustparameter", "\345\217\221\351\200\201\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("adjustparameter", "\346\272\242\345\207\272\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        RecordPosLab->setText(QString());
        SendPosLab->setText(QString());
        OverflowFlagLab->setText(QString());
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("adjustparameter", "\350\276\223\345\207\272\346\216\247\345\210\266\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("adjustparameter", "\347\236\254\346\227\266\345\200\274", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("adjustparameter", "\346\212\245\350\255\246\345\200\274", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("adjustparameter", "\346\216\247\345\210\266\345\200\274", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("adjustparameter", "\345\207\217\351\200\237\345\200\274", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("adjustparameter", "%", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("adjustparameter", "\345\273\266\346\227\266", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("adjustparameter", "\347\247\222", 0, QApplication::UnicodeUTF8));
        SureBtn->setText(QApplication::translate("adjustparameter", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("adjustparameter", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class adjustparameter: public Ui_adjustparameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTPARAMETER_H
