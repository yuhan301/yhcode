/********************************************************************************
** Form generated from reading UI file 'FrmAirlineTicketOrderManager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMAIRLINETICKETORDERMANAGER_H
#define UI_FRMAIRLINETICKETORDERMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmAirlineTicketOrderManager
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget_all;
    QWidget *tab_2;
    QListWidget *listWidget_all_2;
    QWidget *tab_3;
    QListWidget *listWidget_all_4;
    QWidget *tab_4;
    QListWidget *listWidget_all_3;

    void setupUi(QWidget *FrmAirlineTicketOrderManager)
    {
        if (FrmAirlineTicketOrderManager->objectName().isEmpty())
            FrmAirlineTicketOrderManager->setObjectName("FrmAirlineTicketOrderManager");
        FrmAirlineTicketOrderManager->resize(700, 450);
        FrmAirlineTicketOrderManager->setStyleSheet(QString::fromUtf8("#frame{border:1px solid rgba(100, 100, 100,100);}\n"
"#frame{border-radius:10px;}"));
        verticalLayout = new QVBoxLayout(FrmAirlineTicketOrderManager);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(FrmAirlineTicketOrderManager);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(223, 237, 233,100);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(70, 20, 560, 411));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{width:140}\n"
"QTabBar::tab{height:40}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        listWidget_all = new QListWidget(tab);
        listWidget_all->setObjectName("listWidget_all");
        listWidget_all->setGeometry(QRect(20, 10, 511, 341));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        listWidget_all_2 = new QListWidget(tab_2);
        listWidget_all_2->setObjectName("listWidget_all_2");
        listWidget_all_2->setGeometry(QRect(20, 10, 511, 341));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        listWidget_all_4 = new QListWidget(tab_3);
        listWidget_all_4->setObjectName("listWidget_all_4");
        listWidget_all_4->setGeometry(QRect(20, 10, 511, 341));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        listWidget_all_3 = new QListWidget(tab_4);
        listWidget_all_3->setObjectName("listWidget_all_3");
        listWidget_all_3->setGeometry(QRect(20, 10, 511, 341));
        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(frame);


        retranslateUi(FrmAirlineTicketOrderManager);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(FrmAirlineTicketOrderManager);
    } // setupUi

    void retranslateUi(QWidget *FrmAirlineTicketOrderManager)
    {
        FrmAirlineTicketOrderManager->setWindowTitle(QCoreApplication::translate("FrmAirlineTicketOrderManager", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FrmAirlineTicketOrderManager", "\345\205\250\351\203\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FrmAirlineTicketOrderManager", "\345\276\205\346\224\257\344\273\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("FrmAirlineTicketOrderManager", "\345\267\262\345\207\272\347\245\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("FrmAirlineTicketOrderManager", "\345\267\262\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmAirlineTicketOrderManager: public Ui_FrmAirlineTicketOrderManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMAIRLINETICKETORDERMANAGER_H
