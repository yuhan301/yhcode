/********************************************************************************
** Form generated from reading UI file 'FrmRecommendItem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMRECOMMENDITEM_H
#define UI_FRMRECOMMENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmRecommendItem
{
public:
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;

    void setupUi(QWidget *FrmRecommendItem)
    {
        if (FrmRecommendItem->objectName().isEmpty())
            FrmRecommendItem->setObjectName("FrmRecommendItem");
        FrmRecommendItem->resize(810, 66);
        label_9 = new QLabel(FrmRecommendItem);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(630, 30, 161, 20));
        label_7 = new QLabel(FrmRecommendItem);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 30, 151, 20));
        label_5 = new QLabel(FrmRecommendItem);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 30, 69, 20));
        label_6 = new QLabel(FrmRecommendItem);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 30, 151, 20));
        label_8 = new QLabel(FrmRecommendItem);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(430, 30, 171, 20));

        retranslateUi(FrmRecommendItem);

        QMetaObject::connectSlotsByName(FrmRecommendItem);
    } // setupUi

    void retranslateUi(QWidget *FrmRecommendItem)
    {
        FrmRecommendItem->setWindowTitle(QCoreApplication::translate("FrmRecommendItem", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("FrmRecommendItem", "3\345\260\217\346\227\26640\345\210\206", nullptr));
        label_7->setText(QCoreApplication::translate("FrmRecommendItem", "\346\230\206\346\230\216\351\225\277\346\260\264\346\234\272\345\234\272", nullptr));
        label_5->setText(QCoreApplication::translate("FrmRecommendItem", "CA8504", nullptr));
        label_6->setText(QCoreApplication::translate("FrmRecommendItem", "\345\214\227\344\272\254\351\246\226\351\203\275\346\234\272\345\234\272", nullptr));
        label_8->setText(QCoreApplication::translate("FrmRecommendItem", "2023-11-08 10:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmRecommendItem: public Ui_FrmRecommendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMRECOMMENDITEM_H
