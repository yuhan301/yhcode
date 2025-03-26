#ifndef DLGORDERTICKET_H
#define DLGORDERTICKET_H

#include <QWidget>
#include <QDialog>
#include "DataStruct.h"
#include <QListWidget>

#pragma execution_character_set("utf-8")

class DlgOrderTicket : public QDialog
{
    Q_OBJECT
public:
    explicit DlgOrderTicket(QWidget *parent = nullptr);

    void InitData(QList<AirlineInfo> lstInfo);


    OrderInfo m_info;
private:
    void InitWidget();

public slots:

    void RcvdOrderInfo(AirlineInfo info);

signals:

    void sendOrderINfo(OrderInfo info);

private:
    QListWidget *m_pLstWidget;

};

#endif // DLGORDERTICKET_H
