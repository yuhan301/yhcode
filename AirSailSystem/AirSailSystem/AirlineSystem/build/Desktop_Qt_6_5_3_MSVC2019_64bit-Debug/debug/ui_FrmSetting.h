/********************************************************************************
** Form generated from reading UI file 'FrmSetting.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSETTING_H
#define UI_FRMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmSetting
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *MailEdit;
    QLabel *Email;
    QLabel *Password;
    QPushButton *PasswordButton;
    QLineEdit *PasswordEdit;
    QPushButton *AgeButton_2;

    void setupUi(QWidget *FrmSetting)
    {
        if (FrmSetting->objectName().isEmpty())
            FrmSetting->setObjectName("FrmSetting");
        FrmSetting->resize(700, 450);
        FrmSetting->setMouseTracking(true);
        FrmSetting->setAcceptDrops(true);
        FrmSetting->setStyleSheet(QString::fromUtf8("#frame{border:1px solid rgb(100,100,100);}\n"
"#frame{border-radius:10px;}"));
        verticalLayout = new QVBoxLayout(FrmSetting);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(FrmSetting);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(223, 237, 233,100);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 90, 111, 111));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Resource/image/headshot.png);"));
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(220, 50, 341, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        MailEdit = new QLineEdit(widget);
        MailEdit->setObjectName("MailEdit");
        MailEdit->setReadOnly(true);

        gridLayout->addWidget(MailEdit, 0, 1, 1, 1);

        Email = new QLabel(widget);
        Email->setObjectName("Email");

        gridLayout->addWidget(Email, 0, 0, 1, 1);

        Password = new QLabel(widget);
        Password->setObjectName("Password");

        gridLayout->addWidget(Password, 1, 0, 1, 1);

        PasswordButton = new QPushButton(widget);
        PasswordButton->setObjectName("PasswordButton");

        gridLayout->addWidget(PasswordButton, 1, 2, 1, 1);

        PasswordEdit = new QLineEdit(widget);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PasswordEdit, 1, 1, 1, 1);

        AgeButton_2 = new QPushButton(widget);
        AgeButton_2->setObjectName("AgeButton_2");

        gridLayout->addWidget(AgeButton_2, 0, 2, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(FrmSetting);

        QMetaObject::connectSlotsByName(FrmSetting);
    } // setupUi

    void retranslateUi(QWidget *FrmSetting)
    {
        FrmSetting->setWindowTitle(QCoreApplication::translate("FrmSetting", "Form", nullptr));
        label->setText(QString());
        Email->setText(QCoreApplication::translate("FrmSetting", "E-mail:", nullptr));
        Password->setText(QCoreApplication::translate("FrmSetting", "\345\257\206\347\240\201:", nullptr));
        PasswordButton->setText(QCoreApplication::translate("FrmSetting", "\344\277\256\346\224\271", nullptr));
        AgeButton_2->setText(QCoreApplication::translate("FrmSetting", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmSetting: public Ui_FrmSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSETTING_H
