/********************************************************************************
** Form generated from reading UI file 'accountsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSETTINGS_H
#define UI_ACCOUNTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountSettings
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *Name;
    QLineEdit *NameEdit;
    QPushButton *NameButton;
    QLabel *Age;
    QLineEdit *AgeEdit;
    QPushButton *AgeButton;
    QLabel *Email;
    QLineEdit *MailEdit;
    QPushButton *AgeButton_2;
    QLabel *Password;
    QLineEdit *PasswordEdit;
    QPushButton *PasswordButton;

    void setupUi(QWidget *AccountSettings)
    {
        if (AccountSettings->objectName().isEmpty())
            AccountSettings->setObjectName("AccountSettings");
        AccountSettings->resize(800, 450);
        widget = new QWidget(AccountSettings);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 30, 341, 181));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        Name = new QLabel(widget);
        Name->setObjectName("Name");

        gridLayout->addWidget(Name, 0, 0, 1, 1);

        NameEdit = new QLineEdit(widget);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 0, 1, 1, 1);

        NameButton = new QPushButton(widget);
        NameButton->setObjectName("NameButton");

        gridLayout->addWidget(NameButton, 0, 2, 1, 1);

        Age = new QLabel(widget);
        Age->setObjectName("Age");

        gridLayout->addWidget(Age, 1, 0, 1, 1);

        AgeEdit = new QLineEdit(widget);
        AgeEdit->setObjectName("AgeEdit");

        gridLayout->addWidget(AgeEdit, 1, 1, 1, 1);

        AgeButton = new QPushButton(widget);
        AgeButton->setObjectName("AgeButton");

        gridLayout->addWidget(AgeButton, 1, 2, 1, 1);

        Email = new QLabel(widget);
        Email->setObjectName("Email");

        gridLayout->addWidget(Email, 2, 0, 1, 1);

        MailEdit = new QLineEdit(widget);
        MailEdit->setObjectName("MailEdit");

        gridLayout->addWidget(MailEdit, 2, 1, 1, 1);

        AgeButton_2 = new QPushButton(widget);
        AgeButton_2->setObjectName("AgeButton_2");

        gridLayout->addWidget(AgeButton_2, 2, 2, 1, 1);

        Password = new QLabel(widget);
        Password->setObjectName("Password");

        gridLayout->addWidget(Password, 3, 0, 1, 1);

        PasswordEdit = new QLineEdit(widget);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(PasswordEdit, 3, 1, 1, 1);

        PasswordButton = new QPushButton(widget);
        PasswordButton->setObjectName("PasswordButton");

        gridLayout->addWidget(PasswordButton, 3, 2, 1, 1);


        retranslateUi(AccountSettings);

        QMetaObject::connectSlotsByName(AccountSettings);
    } // setupUi

    void retranslateUi(QWidget *AccountSettings)
    {
        AccountSettings->setWindowTitle(QCoreApplication::translate("AccountSettings", "Form", nullptr));
        Name->setText(QCoreApplication::translate("AccountSettings", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        NameButton->setText(QCoreApplication::translate("AccountSettings", "change", nullptr));
        Age->setText(QCoreApplication::translate("AccountSettings", "\345\271\264\351\276\204\357\274\232", nullptr));
        AgeButton->setText(QCoreApplication::translate("AccountSettings", "change", nullptr));
        Email->setText(QCoreApplication::translate("AccountSettings", "E-mail:", nullptr));
        AgeButton_2->setText(QCoreApplication::translate("AccountSettings", "change", nullptr));
        Password->setText(QCoreApplication::translate("AccountSettings", "\345\257\206\347\240\201:", nullptr));
        PasswordButton->setText(QCoreApplication::translate("AccountSettings", "change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountSettings: public Ui_AccountSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSETTINGS_H
