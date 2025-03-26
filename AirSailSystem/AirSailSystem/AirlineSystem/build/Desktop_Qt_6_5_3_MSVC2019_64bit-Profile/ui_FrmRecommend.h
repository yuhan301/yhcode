/********************************************************************************
** Form generated from reading UI file 'FrmRecommend.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMRECOMMEND_H
#define UI_FRMRECOMMEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmRecommend
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *FrmRecommend)
    {
        if (FrmRecommend->objectName().isEmpty())
            FrmRecommend->setObjectName("FrmRecommend");
        FrmRecommend->resize(700, 450);
        FrmRecommend->setStyleSheet(QString::fromUtf8("#frame{border:1px solid rgb(100,100,100);}\n"
"#frame{border-radius:10px;}"));
        verticalLayout = new QVBoxLayout(FrmRecommend);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(FrmRecommend);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(223, 237, 233,100);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(frame);


        retranslateUi(FrmRecommend);

        QMetaObject::connectSlotsByName(FrmRecommend);
    } // setupUi

    void retranslateUi(QWidget *FrmRecommend)
    {
        FrmRecommend->setWindowTitle(QCoreApplication::translate("FrmRecommend", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FrmRecommend", "\345\207\272\345\217\221\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FrmRecommend", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FrmRecommend", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FrmRecommend", "\345\210\260\350\276\276\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FrmRecommend", "\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrmRecommend: public Ui_FrmRecommend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMRECOMMEND_H
