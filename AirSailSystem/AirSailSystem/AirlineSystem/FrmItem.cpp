#include <QDate>
#include "FrmItem.h"
#include "ui_FrmItem.h"

FrmItem::FrmItem(const OrderInfo &info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmItem),
    m_orderInfo(info)
{
    ui->setupUi(this);

    ui->txt_Arrive->setText(info.info.arrivePortName);
    ui->txt_Depart->setText(info.info.departPortName);
    ui->txt_DepartDate->setText(info.info.departDate);
    ui->txt_ArriveDate->setText(info.info.arriveTime);
    ui->txt_Price->setText(info.info.price);
    QDate currentDate(2024, 11, 15);
    QDate departDate = QDate::fromString(info.info.departDate, "yyyy-MM-dd");
    if (departDate < currentDate && info.Status!=-1) {
        ui->txt_OrderStatus->setText("已完成");
    } else {
        if (info.Status == 0) {
            ui->txt_OrderStatus->setText("已出票");
        } else if (info.Status == 1) {
            ui->txt_OrderStatus->setText("待支付");
        }
    }
    if(info.Status==-1){
         ui->txt_OrderStatus->setText("已退票");
    }
    ui->label_3->setStyleSheet("color: black;");
    ui->label_3->setText(info.info.departDate);
}

FrmItem::~FrmItem()
{
    delete ui;
}

OrderInfo FrmItem::getOrderInfo() const
{
    return m_orderInfo;
}
