/********************************************************************************
** Form generated from reading UI file 'FrmAirlineTicketBooking.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMAIRLINETICKETBOOKING_H
#define UI_FRMAIRLINETICKETBOOKING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmAirlineTicketBooking
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QLabel *label_10;
    QDateEdit *dateEdit_DepartDate;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox_2;
    QLabel *label_13;
    QPushButton *btn_SigleSearch;
    QPushButton *btn_Trans;
    QComboBox *DepartCity;
    QComboBox *ArriveCity;

    void setupUi(QWidget *FrmAirlineTicketBooking)
    {
        if (FrmAirlineTicketBooking->objectName().isEmpty())
            FrmAirlineTicketBooking->setObjectName("FrmAirlineTicketBooking");
        FrmAirlineTicketBooking->resize(700, 450);
        FrmAirlineTicketBooking->setStyleSheet(QString::fromUtf8("#frame{border:1px solid rgb(100,100,100);}\n"
"#frame{border-radius:10px;}"));
        horizontalLayout = new QHBoxLayout(FrmAirlineTicketBooking);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(FrmAirlineTicketBooking);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(223, 237, 233,100);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(70, 10, 550, 421));
        stackedWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{width:275}\n"
"QTabBar::tab{height:40}\n"
""));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName("stackedWidgetPage1");
        label_10 = new QLabel(stackedWidgetPage1);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(120, 250, 69, 51));
        dateEdit_DepartDate = new QDateEdit(stackedWidgetPage1);
        dateEdit_DepartDate->setObjectName("dateEdit_DepartDate");
        dateEdit_DepartDate->setGeometry(QRect(250, 182, 110, 25));
        label_11 = new QLabel(stackedWidgetPage1);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(120, 170, 69, 51));
        label_12 = new QLabel(stackedWidgetPage1);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(120, 50, 69, 51));
        spinBox_2 = new QSpinBox(stackedWidgetPage1);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(250, 260, 44, 25));
        label_13 = new QLabel(stackedWidgetPage1);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(340, 50, 69, 51));
        btn_SigleSearch = new QPushButton(stackedWidgetPage1);
        btn_SigleSearch->setObjectName("btn_SigleSearch");
        btn_SigleSearch->setGeometry(QRect(220, 320, 93, 30));
        btn_Trans = new QPushButton(stackedWidgetPage1);
        btn_Trans->setObjectName("btn_Trans");
        btn_Trans->setGeometry(QRect(250, 60, 40, 40));
        btn_Trans->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/redir"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Trans->setIcon(icon);
        btn_Trans->setIconSize(QSize(35, 35));
        DepartCity = new QComboBox(stackedWidgetPage1);
        DepartCity->setObjectName("DepartCity");
        DepartCity->setGeometry(QRect(79, 130, 101, 22));
        ArriveCity = new QComboBox(stackedWidgetPage1);
        ArriveCity->setObjectName("ArriveCity");
        ArriveCity->setGeometry(QRect(320, 130, 111, 22));
        stackedWidget->addWidget(stackedWidgetPage1);

        horizontalLayout->addWidget(frame);


        retranslateUi(FrmAirlineTicketBooking);

        QMetaObject::connectSlotsByName(FrmAirlineTicketBooking);
    } // setupUi

    void retranslateUi(QWidget *FrmAirlineTicketBooking)
    {
        FrmAirlineTicketBooking->setWindowTitle(QCoreApplication::translate("FrmAirlineTicketBooking", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("FrmAirlineTicketBooking", "\344\272\272\346\225\260", nullptr));
        label_11->setText(QCoreApplication::translate("FrmAirlineTicketBooking", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        label_12->setText(QCoreApplication::translate("FrmAirlineTicketBooking", "\345\207\272\345\217\221\345\237\216\345\270\202", nullptr));
        label_13->setText(QCoreApplication::translate("FrmAirlineTicketBooking", "\345\210\260\350\276\276\345\237\216\345\270\202", nullptr));
        btn_SigleSearch->setText(QCoreApplication::translate("FrmAirlineTicketBooking", "\346\220\234\347\264\242", nullptr));
        btn_Trans->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FrmAirlineTicketBooking: public Ui_FrmAirlineTicketBooking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMAIRLINETICKETBOOKING_H
