/********************************************************************************
** Form generated from reading UI file 'FrmMain.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmMain
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_usrName;
    QPushButton *btn_exit;
    QWidget *widget_Center;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_Booking;
    QPushButton *btn_Order;
    QPushButton *btn_Recommand;
    QPushButton *btn_Setting;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *FrmMain)
    {
        if (FrmMain->objectName().isEmpty())
            FrmMain->setObjectName("FrmMain");
        FrmMain->resize(800, 600);
        FrmMain->setMinimumSize(QSize(800, 600));
        FrmMain->setMaximumSize(QSize(800, 600));
        FrmMain->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(FrmMain);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(FrmMain);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/image/back.png);}"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 5, 171, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(244, 204, 164);\n"
"border-image: none;"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(48, 90, 331, 81));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(244, 204, 164);\n"
"border-image: none;"));
        label_2->setWordWrap(true);
        label_usrName = new QLabel(widget);
        label_usrName->setObjectName("label_usrName");
        label_usrName->setGeometry(QRect(526, 6, 221, 31));
        label_usrName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(751, 4, 35, 35));
        btn_exit->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Resource/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_exit->setIcon(icon);
        btn_exit->setIconSize(QSize(25, 25));
        widget_Center = new QWidget(widget);
        widget_Center->setObjectName("widget_Center");
        widget_Center->setGeometry(QRect(50, 140, 700, 450));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 44, 531, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_Booking = new QPushButton(layoutWidget);
        buttonGroup = new QButtonGroup(FrmMain);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_Booking);
        btn_Booking->setObjectName("btn_Booking");
        QFont font2;
        font2.setPointSize(12);
        btn_Booking->setFont(font2);
        btn_Booking->setStyleSheet(QString::fromUtf8("background-image:none;\n"
"background-color: transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/Resource/image/AirTicketBooking.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Booking->setIcon(icon1);
        btn_Booking->setIconSize(QSize(35, 35));
        btn_Booking->setCheckable(true);
        btn_Booking->setChecked(true);
        btn_Booking->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btn_Booking);

        btn_Order = new QPushButton(layoutWidget);
        buttonGroup->addButton(btn_Order);
        btn_Order->setObjectName("btn_Order");
        btn_Order->setFont(font2);
        btn_Order->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"background-color: transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/Resource/image/Order.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Order->setIcon(icon2);
        btn_Order->setIconSize(QSize(35, 35));
        btn_Order->setCheckable(true);
        btn_Order->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btn_Order);

        btn_Recommand = new QPushButton(layoutWidget);
        buttonGroup->addButton(btn_Recommand);
        btn_Recommand->setObjectName("btn_Recommand");
        btn_Recommand->setFont(font2);
        btn_Recommand->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"background-color: transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/Resource/image/Recommend.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Recommand->setIcon(icon3);
        btn_Recommand->setIconSize(QSize(35, 35));
        btn_Recommand->setCheckable(true);
        btn_Recommand->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btn_Recommand);

        btn_Setting = new QPushButton(layoutWidget);
        buttonGroup->addButton(btn_Setting);
        btn_Setting->setObjectName("btn_Setting");
        btn_Setting->setFont(font2);
        btn_Setting->setStyleSheet(QString::fromUtf8("border-image: none;\n"
"background-image: none;\n"
"background-color: transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/Resource/image/UserSetting.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Setting->setIcon(icon4);
        btn_Setting->setIconSize(QSize(35, 35));
        btn_Setting->setCheckable(true);
        btn_Setting->setAutoExclusive(true);

        horizontalLayout_2->addWidget(btn_Setting);


        horizontalLayout->addWidget(widget);


        retranslateUi(FrmMain);

        QMetaObject::connectSlotsByName(FrmMain);
    } // setupUi

    void retranslateUi(QWidget *FrmMain)
    {
        FrmMain->setWindowTitle(QCoreApplication::translate("FrmMain", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmMain", "AirlineSystem", nullptr));
        label_2->setText(QCoreApplication::translate("FrmMain", "Let your dreams take off from here!", nullptr));
        label_usrName->setText(QCoreApplication::translate("FrmMain", "\345\275\223\345\211\215\347\224\250\346\210\267\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        btn_exit->setToolTip(QCoreApplication::translate("FrmMain", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_exit->setText(QString());
        btn_Booking->setText(QCoreApplication::translate("FrmMain", "\346\234\272\347\245\250\351\242\204\345\256\232", nullptr));
        btn_Order->setText(QCoreApplication::translate("FrmMain", "\346\234\272\347\245\250\350\256\242\345\215\225", nullptr));
        btn_Recommand->setText(QCoreApplication::translate("FrmMain", "\346\257\217\346\227\245\346\216\250\350\215\220", nullptr));
        btn_Setting->setText(QCoreApplication::translate("FrmMain", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmMain: public Ui_FrmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
