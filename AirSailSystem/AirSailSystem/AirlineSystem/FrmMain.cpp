#include "FrmMain.h"
#include "ui_FrmMain.h"
#include "MyData.h"
#include "database.h"

FrmMain::FrmMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmMain)
{
    ui->setupUi(this);

    InitStackWidget();

    m_pStackedWidget->hide();

    m_pFrmLogIn = new FrmLogIn(ui->widget_Center);

    m_pFrmLogIn->move(170,50);

    connect(m_pFrmLogIn, SIGNAL(logInSuccess()), this, SLOT(on_LogInSuccess()));

}

FrmMain::~FrmMain()
{
    delete ui;
}

void FrmMain::InitStackWidget()
{
    m_pStackedWidget = new QStackedWidget;
    m_pFrmBooking = new FrmAirlineTicketBooking;
    m_pFrmOrderManager = new FrmAirlineTicketOrderManager;
    m_pFrmRecommend = new FrmRecommend;
    m_pFrmSetting = new FrmSetting;

    QObject::connect(m_pFrmBooking, SIGNAL(UpdateOrderInfo(OrderInfo)), m_pFrmOrderManager, SLOT(append(OrderInfo)));
    m_pStackedWidget->addWidget(m_pFrmBooking);
    m_pStackedWidget->addWidget(m_pFrmOrderManager);
    m_pStackedWidget->addWidget(m_pFrmRecommend);
    m_pStackedWidget->addWidget(m_pFrmSetting);

    m_pStackedWidget->setCurrentIndex(0);
    m_pStackedWidget->setContentsMargins(0,0,0,0);

    QVBoxLayout *layout = new QVBoxLayout(ui->widget_Center);
    layout->addWidget(m_pStackedWidget);
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);
}

void FrmMain::on_btn_Booking_clicked()
{
    m_pStackedWidget->setCurrentIndex(0);
}


void FrmMain::on_btn_Order_clicked()
{
    m_pStackedWidget->setCurrentIndex(1);
}


void FrmMain::on_btn_Recommand_clicked()
{
    m_pStackedWidget->setCurrentIndex(2);
}


void FrmMain::on_btn_Setting_clicked()
{
    m_pStackedWidget->setCurrentIndex(3);
}

void FrmMain::on_LogInSuccess()
{
    ui->label_usrName->setText(QString("当前用户:%1").arg(MyData::m_strUserName));
    m_pFrmLogIn->hide();
    m_pStackedWidget->setCurrentIndex(0);
    m_pStackedWidget->show();
    m_pFrmOrderManager->InitData();
    m_pFrmSetting->InitData();
    m_pFrmRecommend->InitData();

}


void FrmMain::on_btn_exit_clicked()
{
    ui->label_usrName->setText(QString("当前用户:"));

    m_pFrmLogIn->show();
    m_pStackedWidget->setCurrentIndex(0);
    m_pStackedWidget->hide();
}

