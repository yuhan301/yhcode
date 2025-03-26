/********************************************************************************
** Form generated from reading UI file 'FrmItem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMITEM_H
#define UI_FRMITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmItem
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QLabel *label_3;
    QLabel *txt_Depart;
    QLabel *label_2;
    QLabel *txt_ArriveDate;
    QLabel *txt_CraftType;
    QLabel *txt_Arrive;
    QLabel *txt_DepartDate;
    QFrame *line;
    QLabel *txt_OrderStatus;
    QLabel *label;
    QLabel *txt_Price;

    void setupUi(QWidget *FrmItem)
    {
        if (FrmItem->objectName().isEmpty())
            FrmItem->setObjectName("FrmItem");
        FrmItem->resize(480, 100);
        FrmItem->setStyleSheet(QString::fromUtf8("#FrmItem{border:1px solid rgb(220,220,220);}"));
        horizontalLayout = new QHBoxLayout(FrmItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(FrmItem);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 21, 181, 15));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        txt_Depart = new QLabel(frame);
        txt_Depart->setObjectName("txt_Depart");
        txt_Depart->setGeometry(QRect(40, 57, 151, 20));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(63, 2, 69, 15));
        txt_ArriveDate = new QLabel(frame);
        txt_ArriveDate->setObjectName("txt_ArriveDate");
        txt_ArriveDate->setGeometry(QRect(230, 77, 161, 20));
        txt_CraftType = new QLabel(frame);
        txt_CraftType->setObjectName("txt_CraftType");
        txt_CraftType->setGeometry(QRect(20, 37, 69, 20));
        txt_Arrive = new QLabel(frame);
        txt_Arrive->setObjectName("txt_Arrive");
        txt_Arrive->setGeometry(QRect(230, 50, 151, 20));
        txt_DepartDate = new QLabel(frame);
        txt_DepartDate->setObjectName("txt_DepartDate");
        txt_DepartDate->setGeometry(QRect(40, 77, 171, 20));
        line = new QFrame(frame);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 32, 431, 10));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        txt_OrderStatus = new QLabel(frame);
        txt_OrderStatus->setObjectName("txt_OrderStatus");
        txt_OrderStatus->setGeometry(QRect(350, 0, 131, 35));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        txt_OrderStatus->setFont(font);
        txt_OrderStatus->setStyleSheet(QString::fromUtf8("color: rgb(0, 200, 0);"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 2, 30, 30));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Resource/image/AirTicketBooking.png);"));
        txt_Price = new QLabel(frame);
        txt_Price->setObjectName("txt_Price");
        txt_Price->setGeometry(QRect(400, 50, 69, 41));
        txt_Price->setFont(font);

        horizontalLayout->addWidget(frame);


        retranslateUi(FrmItem);

        QMetaObject::connectSlotsByName(FrmItem);
    } // setupUi

    void retranslateUi(QWidget *FrmItem)
    {
        FrmItem->setWindowTitle(QCoreApplication::translate("FrmItem", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("FrmItem", "2023-11-07 09:00:00", nullptr));
        txt_Depart->setText(QCoreApplication::translate("FrmItem", "\345\214\227\344\272\254\351\246\226\351\203\275\346\234\272\345\234\272", nullptr));
        label_2->setText(QCoreApplication::translate("FrmItem", "\346\234\272\347\245\250", nullptr));
        txt_ArriveDate->setText(QCoreApplication::translate("FrmItem", "2023-11-08 13:00:00", nullptr));
        txt_CraftType->setText(QCoreApplication::translate("FrmItem", "CA8504", nullptr));
        txt_Arrive->setText(QCoreApplication::translate("FrmItem", "\346\230\206\346\230\216\351\225\277\346\260\264\346\234\272\345\234\272", nullptr));
        txt_DepartDate->setText(QCoreApplication::translate("FrmItem", "2023-11-08 10:00:00", nullptr));
        txt_OrderStatus->setText(QCoreApplication::translate("FrmItem", "\345\267\262\345\256\214\346\210\220", nullptr));
        label->setText(QString());
        txt_Price->setText(QCoreApplication::translate("FrmItem", "1400\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmItem: public Ui_FrmItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMITEM_H
