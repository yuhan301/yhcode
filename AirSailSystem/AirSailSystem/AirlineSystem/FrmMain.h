#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>
#include <QStackedWidget>
#include "FrmAirlineTicketBooking.h"
#include "FrmAirlineTicketOrderManager.h"
#include "FrmRecommend.h"
#include "FrmSetting.h"
#include "FrmLogIn.h"

#pragma execution_character_set("utf-8")

namespace Ui {
class FrmMain;
}

class FrmMain : public QWidget
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = nullptr);
    ~FrmMain();

private slots:
    void on_btn_Booking_clicked();

    void on_btn_Order_clicked();

    void on_btn_Recommand_clicked();

    void on_btn_Setting_clicked();

    void on_LogInSuccess();

    void on_btn_exit_clicked();

private:

    void InitStackWidget();

private:
    Ui::FrmMain *ui;

    QStackedWidget *m_pStackedWidget;

    FrmAirlineTicketBooking* m_pFrmBooking;

    FrmAirlineTicketOrderManager* m_pFrmOrderManager;

    FrmRecommend* m_pFrmRecommend;

    FrmSetting* m_pFrmSetting;

    FrmLogIn *m_pFrmLogIn;

};

#endif // FRMMAIN_H
