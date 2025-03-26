#ifndef FRMAIRLINETICKETBOOKING_H
#define FRMAIRLINETICKETBOOKING_H

#include <QWidget>
#include "DataStruct.h"
#include "qcombobox.h"

#pragma execution_character_set("utf-8")

namespace Ui {
class FrmAirlineTicketBooking;
}

class FrmAirlineTicketBooking : public QWidget
{
    Q_OBJECT

public:
    explicit FrmAirlineTicketBooking(QWidget *parent = nullptr);
    ~FrmAirlineTicketBooking();
    void mouseDoubleClickEvent(QMouseEvent *event);
signals:

    void UpdateOrderInfo(OrderInfo info);

private slots:
    void on_btn_SigleSearch_clicked();

    void on_btn_Trans_clicked();

private:
    Ui::FrmAirlineTicketBooking *ui;
};

#endif // FRMAIRLINETICKETBOOKING_H
