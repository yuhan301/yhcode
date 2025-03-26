#include "DlgOrderTicket.h"
#include "form.h"
#include "database.h"
#include "MyData.h"
#include <QPushButton>
#include<QMessageBox>
DlgOrderTicket::DlgOrderTicket(QWidget *parent)
    : QDialog{parent}
{
    InitWidget();
}

void DlgOrderTicket::InitData(QList<AirlineInfo> lstInfo)
{
    m_pLstWidget->clear();
    for(int i=0; i<lstInfo.count(); i++)
    {
        Form *group = new Form(lstInfo.at(i));
        QListWidgetItem *item = new QListWidgetItem("");
        item->setBackground(QBrush(QColor(235, 234, 232)));
        m_pLstWidget->addItem(item);
        m_pLstWidget->setItemWidget(item,group);
        connect(group, SIGNAL(SendOrderInfo(AirlineInfo)), this, SLOT(RcvdOrderInfo(AirlineInfo)));
        item->setSizeHint(group->geometry().size());
    }
}

void DlgOrderTicket::InitWidget()
{
    setFixedSize(530,600);

    m_pLstWidget = new QListWidget(this);

    m_pLstWidget->setFixedSize(480,500);

    QPushButton *m_btn = new QPushButton("取消", this);
    m_btn->move(230,535);
    connect(m_btn,&QPushButton::clicked,this,[=](){
        reject();
    });
    m_pLstWidget->move(25,25);
}

void DlgOrderTicket::RcvdOrderInfo(AirlineInfo info)
{

    OrderInfo oInfo;
    oInfo.info = info;
    oInfo.Status = 1;
    oInfo.sName = MyData::m_strUserName;
    DataBase::Instance()->InsertOrderInfo(oInfo);
    MyData::m_lstOrderInfo.append(oInfo);
    m_info = oInfo;
    accept();
    QMessageBox msgBox(this);
    msgBox.setWindowTitle("提示");
    msgBox.setText("订票成功！");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}


