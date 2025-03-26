#ifndef FRMRECOMMEND_H
#define FRMRECOMMEND_H

#include <QWidget>
#include "database.h"
#include "MyData.h"
#include "FrmAirlineTicketOrderManager.h"

namespace Ui {
class FrmRecommend;
}

class FrmRecommend : public QWidget
{
    Q_OBJECT

public:
    explicit FrmRecommend(QWidget *parent = nullptr);
    ~FrmRecommend();

    void InitData();
    void OnOrderTicketClicked(const AirlineInfo &airInfo);
signals:
    void orderBooked(const OrderInfo &orderInfo);

private:
    Ui::FrmRecommend *ui;
};

#endif // FRMRECOMMEND_H
