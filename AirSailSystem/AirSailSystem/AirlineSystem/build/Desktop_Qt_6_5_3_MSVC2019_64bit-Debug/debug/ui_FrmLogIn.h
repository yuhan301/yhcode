/********************************************************************************
** Form generated from reading UI file 'FrmLogIn.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLOGIN_H
#define UI_FRMLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmLogIn
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usrEdit;
    QLineEdit *passwordEdit;
    QPushButton *btn_logIn;
    QPushButton *btn_SignIn;
    QCheckBox *btn_savePassword;

    void setupUi(QWidget *FrmLogIn)
    {
        if (FrmLogIn->objectName().isEmpty())
            FrmLogIn->setObjectName("FrmLogIn");
        FrmLogIn->resize(363, 300);
        frame = new QFrame(FrmLogIn);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(19, 10, 321, 271));
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
        btn_logIn = new QPushButton(frame);
        btn_logIn->setObjectName("btn_logIn");
        btn_logIn->setGeometry(QRect(30, 210, 93, 32));
        btn_SignIn = new QPushButton(frame);
        btn_SignIn->setObjectName("btn_SignIn");
        btn_SignIn->setGeometry(QRect(170, 210, 93, 32));
        btn_savePassword = new QCheckBox(frame);
        btn_savePassword->setObjectName("btn_savePassword");
        btn_savePassword->setGeometry(QRect(210, 110, 81, 31));

        retranslateUi(FrmLogIn);

        QMetaObject::connectSlotsByName(FrmLogIn);
    } // setupUi

    void retranslateUi(QWidget *FrmLogIn)
    {
        FrmLogIn->setWindowTitle(QCoreApplication::translate("FrmLogIn", "Form", nullptr));
        label->setText(QCoreApplication::translate("FrmLogIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("FrmLogIn", "\345\257\206\347\240\201", nullptr));
        btn_logIn->setText(QCoreApplication::translate("FrmLogIn", "\347\231\273\345\275\225", nullptr));
        btn_SignIn->setText(QCoreApplication::translate("FrmLogIn", "\346\263\250\345\206\214", nullptr));
        btn_savePassword->setText(QCoreApplication::translate("FrmLogIn", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmLogIn: public Ui_FrmLogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLOGIN_H
