/********************************************************************************
** Form generated from reading UI file 'sleepreminder.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEEPREMINDER_H
#define UI_SLEEPREMINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SleepReminderClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *MaoDO;
    QLabel *MaoNowTime;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *MaoHour;
    QLabel *label_3;
    QLineEdit *MaoMinute;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *SleepReminderClass)
    {
        if (SleepReminderClass->objectName().isEmpty())
            SleepReminderClass->setObjectName(QStringLiteral("SleepReminderClass"));
        SleepReminderClass->resize(220, 116);
        SleepReminderClass->setMinimumSize(QSize(220, 116));
        SleepReminderClass->setMaximumSize(QSize(220, 116));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SleepReminder/icon"), QSize(), QIcon::Normal, QIcon::Off);
        SleepReminderClass->setWindowIcon(icon);
        centralWidget = new QWidget(SleepReminderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        MaoDO = new QPushButton(centralWidget);
        MaoDO->setObjectName(QStringLiteral("MaoDO"));

        gridLayout->addWidget(MaoDO, 2, 0, 1, 1);

        MaoNowTime = new QLabel(centralWidget);
        MaoNowTime->setObjectName(QStringLiteral("MaoNowTime"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        MaoNowTime->setFont(font);
        MaoNowTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MaoNowTime, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        MaoHour = new QLineEdit(centralWidget);
        MaoHour->setObjectName(QStringLiteral("MaoHour"));
        MaoHour->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(MaoHour);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        MaoMinute = new QLineEdit(centralWidget);
        MaoMinute->setObjectName(QStringLiteral("MaoMinute"));
        MaoMinute->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(MaoMinute);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        SleepReminderClass->setCentralWidget(centralWidget);

        retranslateUi(SleepReminderClass);

        QMetaObject::connectSlotsByName(SleepReminderClass);
    } // setupUi

    void retranslateUi(QMainWindow *SleepReminderClass)
    {
        SleepReminderClass->setWindowTitle(QApplication::translate("SleepReminderClass", "\345\244\247\346\257\233\346\227\251\347\235\241\346\217\220\351\206\222", 0));
        MaoDO->setText(QApplication::translate("SleepReminderClass", "\345\274\200\345\220\257 / \345\205\263\351\227\255", 0));
        MaoNowTime->setText(QApplication::translate("SleepReminderClass", "00:00:00", 0));
        label_2->setText(QApplication::translate("SleepReminderClass", "\350\256\276\345\256\232\346\227\266\351\227\264\357\274\232", 0));
        label_3->setText(QApplication::translate("SleepReminderClass", "\347\202\271", 0));
        label_4->setText(QApplication::translate("SleepReminderClass", "\345\210\206", 0));
    } // retranslateUi

};

namespace Ui {
    class SleepReminderClass: public Ui_SleepReminderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEEPREMINDER_H
