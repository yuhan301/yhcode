#include "FrmRecommend.h"
#include "ui_FrmRecommend.h"
#include <QListWidgetItem>
#include <QPushButton>
#include <QMessageBox>
#include "database.h"

FrmRecommend::FrmRecommend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmRecommend)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    InitData();
}

FrmRecommend::~FrmRecommend()
{
    delete ui;
}

void FrmRecommend::InitData()
{
    ui->tableWidget->setRowCount(0);
    int index = 0;
    QList<AirlineInfo> lstRecommendTickets = DataBase::Instance()->GetTop10RecommendTickets(MyData::m_strUserName);
    for (const auto &airInfo : lstRecommendTickets)
    {
        ui->tableWidget->insertRow(index);
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(airInfo.departCity));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(airInfo.departDate));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(airInfo.departTime));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(airInfo.arriveCity));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(airInfo.arriveTime));
        QPushButton *orderButton = new QPushButton("订票");
        ui->tableWidget->setCellWidget(index, 5, orderButton);
        connect(orderButton, &QPushButton::clicked, [this, airInfo]() {
            this->OnOrderTicketClicked(airInfo);
        });

        index++;
    }
}
void FrmRecommend::OnOrderTicketClicked(const AirlineInfo &airInfo)
{
    OrderInfo order;
    order.info = airInfo;
    order.Status = 1;
    order.sName = MyData::m_strUserName;
    DataBase::Instance()->InsertOrderInfo(order);
    MyData::m_lstOrderInfo.append(order);
    QMessageBox::information(this, "订票成功", "您已成功预定此航班！");
}

