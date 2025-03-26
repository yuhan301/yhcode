#include "FrmAirlineTicketOrderManager.h"
#include "ui_FrmAirlineTicketOrderManager.h"
#include <QMessageBox>
#include <QDate>

FrmAirlineTicketOrderManager::FrmAirlineTicketOrderManager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmAirlineTicketOrderManager)
{
    ui->setupUi(this);
    this->installEventFilter(this);
}

bool FrmAirlineTicketOrderManager::eventFilter(QObject *obj, QEvent *event) {
    if (event->type() == QEvent::Show) {

        InitData();
        return true;
    }
    return QWidget::eventFilter(obj, event);
}

FrmAirlineTicketOrderManager::~FrmAirlineTicketOrderManager()
{
    delete ui;
}

void FrmAirlineTicketOrderManager::append(OrderInfo info)
{


    FrmItem *group = new FrmItem(info);
    QListWidgetItem *item = new QListWidgetItem("");
    item->setBackground(QBrush(QColor(235, 234, 232)));

    item->setData(Qt::UserRole, QVariant::fromValue(info));
    qDebug() << "Appending OrderInfo: " << &info;
    qDebug() << "OrderInfo details: Username=" << info.sName
             << ", Flight No=" << info.info.flightNo
             << ", Status=" << info.Status;

    qDebug() << "Is OrderInfo registered? " << QMetaType::isRegistered(qMetaTypeId<OrderInfo>());

    QDate currentDate(2024, 11, 15);
    QDate departDate = QDate::fromString(info.info.departDate, "yyyy-MM-dd");
    if (info.Status == 0)
    {
        if(departDate>=currentDate){
            ui->listWidget_all_4->addItem(item);
            ui->listWidget_all_4->setItemWidget(item, group);
        }else {
            ui->listWidget_all_3->addItem(item);
            ui->listWidget_all_3->setItemWidget(item, group);
        }

    }
    else if (info.Status == 1)
    {
        ui->listWidget_all_2->addItem(item);
        ui->listWidget_all_2->setItemWidget(item, group);
    }
    item->setSizeHint(group->geometry().size());

}



void FrmAirlineTicketOrderManager::InitData()
{
    ui->listWidget_all->clear();
    ui->listWidget_all_2->clear();
    ui->listWidget_all_3->clear();
    ui->listWidget_all_4->clear();
    QList<OrderInfo> lstInfo = DataBase::Instance()->queryALLOrderInfo(MyData::m_strUserName);
    for (const auto& info : lstInfo) {
        FrmItem *group = new FrmItem(info);
        QListWidgetItem *item = new QListWidgetItem("");
        item->setBackground(QBrush(QColor(235, 234, 232)));
        ui->listWidget_all->addItem(item);
        ui->listWidget_all->setItemWidget(item,group);
        item->setSizeHint(group->geometry().size());
        append(info);
    }
}

void FrmAirlineTicketOrderManager::on_listWidget_all_2_itemClicked(QListWidgetItem *item)
{
    if (item)
    {
        QMessageBox msgBox(this);
        msgBox.setWindowTitle("提示");
        msgBox.setText("是否确认支付机票？");
        msgBox.setIcon(QMessageBox::Warning);
        QPushButton *agreeBtn = msgBox.addButton("确认", QMessageBox::AcceptRole);
        msgBox.addButton("取消", QMessageBox::RejectRole);
        if(QDialog::Accepted == msgBox.exec())
        {
        }

        if (msgBox.clickedButton() == (QAbstractButton *)agreeBtn)
        {
            QVariant data = item->data(Qt::UserRole);
            OrderInfo orderInfo = data.value<OrderInfo>();
            orderInfo.Status = 0;
            bool updateResult = DataBase::Instance()->updateOrderStatus(orderInfo);

            if (updateResult) {
                ui->listWidget_all_2->takeItem(ui->listWidget_all_2->row(item));
                InitData();


            } else {
                qDebug() << "Failed to update order status!";
            }
        }
    }
}

void FrmAirlineTicketOrderManager::on_listWidget_all_4_itemClicked(QListWidgetItem *item)
{
    if (item)
    {
        QMessageBox msgBox(this);
        msgBox.setWindowTitle("退票确认");
        msgBox.setText("是否确认退票？");
        msgBox.setIcon(QMessageBox::Warning);
        QPushButton *agreeBtn2 = msgBox.addButton("确认", QMessageBox::AcceptRole);
        msgBox.addButton("取消", QMessageBox::RejectRole);
        if(QDialog::Accepted == msgBox.exec())
        {
        }

        if ( msgBox.clickedButton() == (QAbstractButton *)agreeBtn2)
        {
            QVariant data = item->data(Qt::UserRole);
            OrderInfo orderInfo = data.value<OrderInfo>();
            orderInfo.Status = -1;
            bool updateResult = DataBase::Instance()->updateOrderStatus(orderInfo);

            if (updateResult)
            {
                ui->listWidget_all_4->takeItem(ui->listWidget_all_4->row(item));
                QMessageBox::information(this, "退票成功", "订单已成功退票！");
                InitData();
            }
            else
            {
                QMessageBox::warning(this, "退票失败", "退票操作失败，请重试！");
            }
        }
    }
}

