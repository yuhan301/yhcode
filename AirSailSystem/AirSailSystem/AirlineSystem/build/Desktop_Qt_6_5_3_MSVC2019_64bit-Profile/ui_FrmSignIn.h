/********************************************************************************
** Form generated from reading UI file 'FrmSignIn.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSIGNIN_H
#define UI_FRMSIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmSignIn
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usrEdit;
    QLineEdit *passwordEdit;
    QPushButton *btn_logIn;
    QLineEdit *EMailEdit;
    QLabel *label_3;

    void setupUi(QWidget *FrmSignIn)
    {
        if (FrmSignIn->objectName().isEmpty())
            FrmSignIn->setObjectName("FrmSignIn");
        FrmSignIn->resize(400, 395);
        frame = new QFrame(FrmSignIn);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 10, 321, 341));
        frame->setStyleSheet(QString::fromUtf8("#frame{background-color: rgba(0, 170, 255,100);}\n"
"#frame{border: 2px solid rgba(100,100,100,100);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 69, 30));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 69, 25));
        label_2->setFont(font);
        usrEdit = new QLineEdit(frame);
        usrEdit->setObjectName("usrEdit");
        usrEdit->setGeometry(QRect(32, 60, 251, 30));
        passwordEdit = new QLineEdit(frame);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(30, 150, 251, 30));
        passwordEdit->setEchoMode(QLineEdit::Password);
        btn_logIn = new QPushButton(frame);
        btn_logIn->setObjectName("btn_logIn");
        btn_logIn->setGeometry(QRect(95, 291, 93, 32));
        EMailEdit = new QLineEdit(frame);
        EMailEdit->setObjectName("EMailEdit");
        EMailEdit->setGeometry(QRect(30, 239, 251, 30));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 200, 69, 25));
        label_3->setFont(font);

        retranslateUi(FrmSignIn);

        QMetaObject::connectSlotsByName(FrmSignIn);
    } // setupUi

    void retranslateUi(QWidget *FrmSignIn)
    {
        FrmSignIn->setWindowTitle(QCoreApplication::translate("FrmSignIn", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmSignIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("FrmSignIn", "\345\257\206\347\240\201", nullptr));
        btn_logIn->setText(QCoreApplication::translate("FrmSignIn", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("FrmSignIn", "\351\202\256\347\256\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmSignIn: public Ui_FrmSignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSIGNIN_H
