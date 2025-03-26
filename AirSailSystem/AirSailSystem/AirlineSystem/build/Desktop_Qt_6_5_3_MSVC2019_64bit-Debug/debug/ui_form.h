/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *btn_Order;
    QFrame *frame;
    QLabel *txt_DepartTime;
    QLabel *txt_ArriveTime;
    QLabel *label_3;
    QLabel *txt_Depart;
    QLabel *txt_Arrive;
    QLabel *txt_craftType;
    QLabel *txt_price;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(441, 110);
        btn_Order = new QPushButton(Form);
        btn_Order->setObjectName("btn_Order");
        btn_Order->setGeometry(QRect(350, 60, 81, 41));
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(5, 3, 341, 101));
        frame->setStyleSheet(QString::fromUtf8("#frame{border:1px solid rgb(220,220,220)}"));
        txt_DepartTime = new QLabel(frame);
        txt_DepartTime->setObjectName("txt_DepartTime");
        txt_DepartTime->setGeometry(QRect(10, 3, 111, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        txt_DepartTime->setFont(font);
        txt_ArriveTime = new QLabel(frame);
        txt_ArriveTime->setObjectName("txt_ArriveTime");
        txt_ArriveTime->setGeometry(QRect(240, 0, 101, 41));
        txt_ArriveTime->setFont(font);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 3, 111, 41));
        QFont font1;
        font1.setUnderline(true);
        font1.setStrikeOut(false);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        txt_Depart = new QLabel(frame);
        txt_Depart->setObjectName("txt_Depart");
        txt_Depart->setGeometry(QRect(10, 40, 111, 41));
        txt_Arrive = new QLabel(frame);
        txt_Arrive->setObjectName("txt_Arrive");
        txt_Arrive->setGeometry(QRect(220, 37, 111, 41));
        txt_craftType = new QLabel(frame);
        txt_craftType->setObjectName("txt_craftType");
        txt_craftType->setGeometry(QRect(10, 76, 111, 21));
        txt_price = new QLabel(Form);
        txt_price->setObjectName("txt_price");
        txt_price->setGeometry(QRect(357, 10, 69, 41));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        btn_Order->setText(QCoreApplication::translate("Form", "\350\256\242", nullptr));
        txt_DepartTime->setText(QCoreApplication::translate("Form", "09:15", nullptr));
        txt_ArriveTime->setText(QCoreApplication::translate("Form", "13:25", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "4h10m", nullptr));
        txt_Depart->setText(QCoreApplication::translate("Form", "\351\246\226\351\203\275\346\234\272\345\234\272 T3", nullptr));
        txt_Arrive->setText(QCoreApplication::translate("Form", "\345\234\260\347\252\235\345\240\241\346\234\272\345\234\272 T2", nullptr));
        txt_craftType->setText(QCoreApplication::translate("Form", "CA1253", nullptr));
        txt_price->setText(QCoreApplication::translate("Form", "1940\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
