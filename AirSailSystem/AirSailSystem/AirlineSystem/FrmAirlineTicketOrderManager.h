#ifndef FRMAIRLINETICKETORDERMANAGER_H
#define FRMAIRLINETICKETORDERMANAGER_H

#include <QWidget>
#include "database.h"
#include "MyData.h"
#include "FrmItem.h"
#include <QListWidgetItem>


namespace Ui {
class FrmAirlineTicketOrderManager;
}

class FrmAirlineTicketOrderManager : public QWidget
{
    Q_OBJECT

public:
    explicit FrmAirlineTicketOrderManager(QWidget *parent = nullptr);
    ~FrmAirlineTicketOrderManager();
    bool eventFilter(QObject *obj, QEvent *event);

    void InitData();


public slots:
       void append(OrderInfo info);

private slots:
    void on_listWidget_all_2_itemClicked(QListWidgetItem *item);
    void on_listWidget_all_4_itemClicked(QListWidgetItem *item);

private:


private:
    Ui::FrmAirlineTicketOrderManager *ui;
};

#endif // FRMAIRLINETICKETORDERMANAGER_H
