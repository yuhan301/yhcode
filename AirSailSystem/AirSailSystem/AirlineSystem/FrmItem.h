#ifndef FRMITEM_H
#define FRMITEM_H

#include <QWidget>
#include "DataStruct.h"

#pragma execution_character_set("utf-8")
namespace Ui {
class FrmItem;
}

class FrmItem : public QWidget
{
    Q_OBJECT

public:
    explicit FrmItem(const OrderInfo &info, QWidget *parent = nullptr);
    ~FrmItem();

    OrderInfo getOrderInfo() const;

private:
    Ui::FrmItem *ui;
    OrderInfo m_orderInfo;
};

#endif // FRMITEM_H
