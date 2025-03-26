/********************************************************************************
** Form generated from reading UI file 'ticketmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETMANAGER_H
#define UI_TICKETMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketManager
{
public:
    QPushButton *Search;
    QLineEdit *lineEdit;
    QLabel *Start;
    QPushButton *Change;
    QLabel *End;
    QLineEdit *lineEdit_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *Time;

    void setupUi(QWidget *TicketManager)
    {
        if (TicketManager->objectName().isEmpty())
            TicketManager->setObjectName("TicketManager");
        TicketManager->resize(800, 450);
        TicketManager->setAutoFillBackground(false);
        Search = new QPushButton(TicketManager);
        Search->setObjectName("Search");
        Search->setGeometry(QRect(300, 190, 91, 31));
        lineEdit = new QLineEdit(TicketManager);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 100, 114, 21));
        Start = new QLabel(TicketManager);
        Start->setObjectName("Start");
        Start->setGeometry(QRect(110, 70, 114, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        font.setBold(true);
        Start->setFont(font);
        Change = new QPushButton(TicketManager);
        Change->setObjectName("Change");
        Change->setGeometry(QRect(230, 100, 56, 31));
        End = new QLabel(TicketManager);
        End->setObjectName("End");
        End->setGeometry(QRect(330, 70, 114, 18));
        End->setFont(font);
        lineEdit_2 = new QLineEdit(TicketManager);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(300, 100, 114, 21));
        dateTimeEdit = new QDateTimeEdit(TicketManager);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(450, 100, 141, 17));
        Time = new QLabel(TicketManager);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(480, 70, 92, 18));
        Time->setFont(font);

        retranslateUi(TicketManager);

        QMetaObject::connectSlotsByName(TicketManager);
    } // setupUi

    void retranslateUi(QWidget *TicketManager)
    {
        TicketManager->setWindowTitle(QCoreApplication::translate("TicketManager", "Form", nullptr));
        Search->setText(QCoreApplication::translate("TicketManager", "Search Flights", nullptr));
        Start->setText(QCoreApplication::translate("TicketManager", "departure", nullptr));
        Change->setText(QCoreApplication::translate("TicketManager", "change", nullptr));
        End->setText(QCoreApplication::translate("TicketManager", "arrive", nullptr));
        Time->setText(QCoreApplication::translate("TicketManager", "time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketManager: public Ui_TicketManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETMANAGER_H
