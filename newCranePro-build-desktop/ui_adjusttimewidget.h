/********************************************************************************
** Form generated from reading UI file 'adjusttimewidget.ui'
**
** Created: Mon Sep 23 10:35:30 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADJUSTTIMEWIDGET_H
#define UI_ADJUSTTIMEWIDGET_H

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

class Ui_adjusttimewidget
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *YearLineE;
    QLabel *label_2;
    QLineEdit *MonLineE;
    QLabel *label_3;
    QLineEdit *DayLineE;
    QLabel *label_4;
    QLineEdit *HourLineE;
    QLabel *label_5;
    QLineEdit *MinLineE;
    QLabel *label_6;
    QLineEdit *SecLineE;
    QLabel *label_7;
    QPushButton *ModifyTime;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLineEdit *NewPassword2LineE;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *OldPasswordLineE;
    QLineEdit *NewPasswordLineE;
    QLabel *label_11;
    QPushButton *GetWord;
    QPushButton *SureModifyWord;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *MachID;
    QPushButton *SysParSureBtn;
    QPushButton *BackToWorkBtn;

    void setupUi(QWidget *adjusttimewidget)
    {
        if (adjusttimewidget->objectName().isEmpty())
            adjusttimewidget->setObjectName(QString::fromUtf8("adjusttimewidget"));
        adjusttimewidget->resize(800, 480);
        groupBox = new QGroupBox(adjusttimewidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 800, 200));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 170, 255));
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
        label->setGeometry(QRect(20, 20, 150, 30));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        YearLineE = new QLineEdit(groupBox);
        YearLineE->setObjectName(QString::fromUtf8("YearLineE"));
        YearLineE->setGeometry(QRect(220, 70, 80, 30));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 70, 30, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        MonLineE = new QLineEdit(groupBox);
        MonLineE->setObjectName(QString::fromUtf8("MonLineE"));
        MonLineE->setGeometry(QRect(220, 110, 80, 30));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 110, 30, 30));
        label_3->setFont(font1);
        DayLineE = new QLineEdit(groupBox);
        DayLineE->setObjectName(QString::fromUtf8("DayLineE"));
        DayLineE->setGeometry(QRect(220, 150, 80, 30));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 150, 30, 30));
        label_4->setFont(font1);
        HourLineE = new QLineEdit(groupBox);
        HourLineE->setObjectName(QString::fromUtf8("HourLineE"));
        HourLineE->setGeometry(QRect(350, 70, 80, 30));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 70, 30, 30));
        label_5->setFont(font1);
        MinLineE = new QLineEdit(groupBox);
        MinLineE->setObjectName(QString::fromUtf8("MinLineE"));
        MinLineE->setGeometry(QRect(350, 110, 80, 30));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(430, 110, 30, 30));
        label_6->setFont(font1);
        SecLineE = new QLineEdit(groupBox);
        SecLineE->setObjectName(QString::fromUtf8("SecLineE"));
        SecLineE->setGeometry(QRect(350, 150, 80, 30));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 150, 30, 30));
        label_7->setFont(font1);
        ModifyTime = new QPushButton(groupBox);
        ModifyTime->setObjectName(QString::fromUtf8("ModifyTime"));
        ModifyTime->setGeometry(QRect(540, 150, 60, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        ModifyTime->setFont(font2);
        groupBox_2 = new QGroupBox(adjusttimewidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 200, 500, 230));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(85, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(213, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(149, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(42, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(56, 170, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox_2->setPalette(palette1);
        groupBox_2->setAutoFillBackground(true);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 20, 150, 30));
        label_8->setFont(font);
        NewPassword2LineE = new QLineEdit(groupBox_2);
        NewPassword2LineE->setObjectName(QString::fromUtf8("NewPassword2LineE"));
        NewPassword2LineE->setGeometry(QRect(130, 140, 150, 30));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 140, 100, 30));
        label_9->setFont(font1);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 100, 100, 30));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        OldPasswordLineE = new QLineEdit(groupBox_2);
        OldPasswordLineE->setObjectName(QString::fromUtf8("OldPasswordLineE"));
        OldPasswordLineE->setGeometry(QRect(130, 60, 150, 30));
        NewPasswordLineE = new QLineEdit(groupBox_2);
        NewPasswordLineE->setObjectName(QString::fromUtf8("NewPasswordLineE"));
        NewPasswordLineE->setGeometry(QRect(130, 100, 150, 30));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 60, 100, 30));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);
        GetWord = new QPushButton(groupBox_2);
        GetWord->setObjectName(QString::fromUtf8("GetWord"));
        GetWord->setGeometry(QRect(310, 60, 60, 30));
        GetWord->setFont(font2);
        SureModifyWord = new QPushButton(groupBox_2);
        SureModifyWord->setObjectName(QString::fromUtf8("SureModifyWord"));
        SureModifyWord->setGeometry(QRect(310, 140, 60, 30));
        SureModifyWord->setFont(font2);
        groupBox_3 = new QGroupBox(adjusttimewidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(500, 200, 300, 230));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox_3->setPalette(palette2);
        groupBox_3->setAutoFillBackground(true);
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 20, 150, 30));
        label_12->setFont(font);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 60, 100, 30));
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);
        MachID = new QLineEdit(groupBox_3);
        MachID->setObjectName(QString::fromUtf8("MachID"));
        MachID->setGeometry(QRect(60, 90, 150, 30));
        SysParSureBtn = new QPushButton(groupBox_3);
        SysParSureBtn->setObjectName(QString::fromUtf8("SysParSureBtn"));
        SysParSureBtn->setGeometry(QRect(220, 90, 60, 30));
        SysParSureBtn->setFont(font2);
        BackToWorkBtn = new QPushButton(adjusttimewidget);
        BackToWorkBtn->setObjectName(QString::fromUtf8("BackToWorkBtn"));
        BackToWorkBtn->setGeometry(QRect(720, 440, 60, 30));
        BackToWorkBtn->setFont(font2);

        retranslateUi(adjusttimewidget);

        QMetaObject::connectSlotsByName(adjusttimewidget);
    } // setupUi

    void retranslateUi(QWidget *adjusttimewidget)
    {
        adjusttimewidget->setWindowTitle(QApplication::translate("adjusttimewidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("adjusttimewidget", "\347\263\273\347\273\237\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        YearLineE->setText(QString());
        label_2->setText(QApplication::translate("adjusttimewidget", "\345\271\264", 0, QApplication::UnicodeUTF8));
        MonLineE->setText(QString());
        label_3->setText(QApplication::translate("adjusttimewidget", "\346\234\210", 0, QApplication::UnicodeUTF8));
        DayLineE->setText(QString());
        label_4->setText(QApplication::translate("adjusttimewidget", "\346\227\245", 0, QApplication::UnicodeUTF8));
        HourLineE->setText(QString());
        label_5->setText(QApplication::translate("adjusttimewidget", "\346\227\266", 0, QApplication::UnicodeUTF8));
        MinLineE->setText(QString());
        label_6->setText(QApplication::translate("adjusttimewidget", "\345\210\206", 0, QApplication::UnicodeUTF8));
        SecLineE->setText(QString());
        label_7->setText(QApplication::translate("adjusttimewidget", "\347\247\222", 0, QApplication::UnicodeUTF8));
        ModifyTime->setText(QApplication::translate("adjusttimewidget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        label_8->setText(QApplication::translate("adjusttimewidget", "\347\263\273\347\273\237\345\257\206\347\240\201\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        NewPassword2LineE->setText(QString());
        label_9->setText(QApplication::translate("adjusttimewidget", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("adjusttimewidget", "\346\226\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        OldPasswordLineE->setText(QString());
        NewPasswordLineE->setText(QString());
        label_11->setText(QApplication::translate("adjusttimewidget", "\346\227\247\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        GetWord->setText(QApplication::translate("adjusttimewidget", "\346\217\220\345\217\226", 0, QApplication::UnicodeUTF8));
        SureModifyWord->setText(QApplication::translate("adjusttimewidget", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        label_12->setText(QApplication::translate("adjusttimewidget", "\347\263\273\347\273\237\345\217\202\346\225\260", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("adjusttimewidget", "\346\234\254\346\234\272ID", 0, QApplication::UnicodeUTF8));
        MachID->setText(QString());
        SysParSureBtn->setText(QApplication::translate("adjusttimewidget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        BackToWorkBtn->setText(QApplication::translate("adjusttimewidget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class adjusttimewidget: public Ui_adjusttimewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADJUSTTIMEWIDGET_H
