/********************************************************************************
** Form generated from reading UI file 'privatesendconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATESENDCONFIG_H
#define UI_PRIVATESENDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PrivateSendConfig
{
public:
    QPushButton *buttonBasic;
    QPushButton *buttonHigh;
    QPushButton *buttonMax;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *PrivateSendConfig)
    {
        if (PrivateSendConfig->objectName().isEmpty())
            PrivateSendConfig->setObjectName(QStringLiteral("PrivateSendConfig"));
        PrivateSendConfig->resize(630, 307);
        buttonBasic = new QPushButton(PrivateSendConfig);
        buttonBasic->setObjectName(QStringLiteral("buttonBasic"));
        buttonBasic->setGeometry(QRect(20, 70, 151, 27));
        buttonHigh = new QPushButton(PrivateSendConfig);
        buttonHigh->setObjectName(QStringLiteral("buttonHigh"));
        buttonHigh->setGeometry(QRect(20, 140, 151, 27));
        buttonMax = new QPushButton(PrivateSendConfig);
        buttonMax->setObjectName(QStringLiteral("buttonMax"));
        buttonMax->setGeometry(QRect(20, 210, 151, 27));
        label = new QLabel(PrivateSendConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 571, 31));
        label_2 = new QLabel(PrivateSendConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 70, 421, 21));
        label_3 = new QLabel(PrivateSendConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 140, 411, 21));
        label_4 = new QLabel(PrivateSendConfig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 210, 421, 21));
        label_6 = new QLabel(PrivateSendConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 100, 561, 21));
        label_7 = new QLabel(PrivateSendConfig);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 170, 561, 21));
        label_8 = new QLabel(PrivateSendConfig);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 240, 561, 21));
        label_9 = new QLabel(PrivateSendConfig);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 260, 561, 21));
        line = new QFrame(PrivateSendConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 601, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(PrivateSendConfig);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 190, 601, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(PrivateSendConfig);

        QMetaObject::connectSlotsByName(PrivateSendConfig);
    } // setupUi

    void retranslateUi(QDialog *PrivateSendConfig)
    {
        PrivateSendConfig->setWindowTitle(QApplication::translate("PrivateSendConfig", "Configure PrivateSend", Q_NULLPTR));
        buttonBasic->setText(QApplication::translate("PrivateSendConfig", "Basic Privacy", Q_NULLPTR));
        buttonHigh->setText(QApplication::translate("PrivateSendConfig", "High Privacy", Q_NULLPTR));
        buttonMax->setText(QApplication::translate("PrivateSendConfig", "Maximum Privacy", Q_NULLPTR));
        label->setText(QApplication::translate("PrivateSendConfig", "Please select a privacy level.", Q_NULLPTR));
        label_2->setText(QApplication::translate("PrivateSendConfig", "Use 2 separate masternodes to mix funds up to 10000 RIM", Q_NULLPTR));
        label_3->setText(QApplication::translate("PrivateSendConfig", "Use 8 separate masternodes to mix funds up to 10000 RIM", Q_NULLPTR));
        label_4->setText(QApplication::translate("PrivateSendConfig", "Use 16 separate masternodes", Q_NULLPTR));
        label_6->setText(QApplication::translate("PrivateSendConfig", "This option is the quickest and will cost about ~0.025 RIM to anonymize 10000 RIM", Q_NULLPTR));
        label_7->setText(QApplication::translate("PrivateSendConfig", "This option is moderately fast and will cost about 0.05 RIM to anonymize 10000 RIM", Q_NULLPTR));
        label_8->setText(QApplication::translate("PrivateSendConfig", "This is the slowest and most secure option. Using maximum anonymity will cost", Q_NULLPTR));
        label_9->setText(QApplication::translate("PrivateSendConfig", "0.1 RIM per 10000 RIM you anonymize.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrivateSendConfig: public Ui_PrivateSendConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATESENDCONFIG_H
