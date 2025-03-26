/********************************************************************************
** Form generated from reading UI file 'dailyrecommendation.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILYRECOMMENDATION_H
#define UI_DAILYRECOMMENDATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DailyRecommendation
{
public:
    QListWidget *flightsListWidget;
    QPushButton *refreshButton;

    void setupUi(QWidget *DailyRecommendation)
    {
        if (DailyRecommendation->objectName().isEmpty())
            DailyRecommendation->setObjectName("DailyRecommendation");
        DailyRecommendation->resize(800, 450);
        flightsListWidget = new QListWidget(DailyRecommendation);
        flightsListWidget->setObjectName("flightsListWidget");
        flightsListWidget->setGeometry(QRect(80, 10, 641, 361));
        refreshButton = new QPushButton(DailyRecommendation);
        refreshButton->setObjectName("refreshButton");
        refreshButton->setGeometry(QRect(380, 380, 56, 18));

        retranslateUi(DailyRecommendation);

        QMetaObject::connectSlotsByName(DailyRecommendation);
    } // setupUi

    void retranslateUi(QWidget *DailyRecommendation)
    {
        DailyRecommendation->setWindowTitle(QCoreApplication::translate("DailyRecommendation", "Form", nullptr));
        refreshButton->setText(QCoreApplication::translate("DailyRecommendation", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DailyRecommendation: public Ui_DailyRecommendation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILYRECOMMENDATION_H
