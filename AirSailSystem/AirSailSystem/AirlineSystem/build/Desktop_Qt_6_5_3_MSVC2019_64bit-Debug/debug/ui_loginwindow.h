/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QCommandLinkButton *Registerlink;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *Name;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *Password;
    QPushButton *btn_SavePassword;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *login;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(400, 300);
        LoginWindow->setMinimumSize(QSize(400, 300));
        LoginWindow->setMaximumSize(QSize(400, 300));
        Registerlink = new QCommandLinkButton(LoginWindow);
        Registerlink->setObjectName("Registerlink");
        Registerlink->setGeometry(QRect(210, 230, 172, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Registerlink->sizePolicy().hasHeightForWidth());
        Registerlink->setSizePolicy(sizePolicy);
        widget_3 = new QWidget(LoginWindow);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(90, 10, 231, 201));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        Name = new QLabel(widget);
        Name->setObjectName("Name");

        gridLayout->addWidget(Name, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        Password = new QLabel(widget);
        Password->setObjectName("Password");

        gridLayout->addWidget(Password, 3, 0, 1, 1);

        btn_SavePassword = new QPushButton(widget);
        btn_SavePassword->setObjectName("btn_SavePassword");

        gridLayout->addWidget(btn_SavePassword, 2, 1, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        login = new QPushButton(widget_2);
        login->setObjectName("login");

        horizontalLayout->addWidget(login);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exit = new QPushButton(widget_2);
        exit->setObjectName("exit");

        horizontalLayout->addWidget(exit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        Registerlink->setText(QCoreApplication::translate("LoginWindow", "\350\277\230\346\234\252\346\263\250\345\206\214\357\274\237\347\202\271\345\207\273\350\267\263\350\275\254\346\263\250\345\206\214", nullptr));
        Name->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        Password->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_SavePassword->setText(QCoreApplication::translate("LoginWindow", "PushButton", nullptr));
        login->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        exit->setText(QCoreApplication::translate("LoginWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
