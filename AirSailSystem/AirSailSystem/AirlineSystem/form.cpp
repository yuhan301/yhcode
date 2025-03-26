#include "form.h"
#include "ui_form.h"

Form::Form(AirlineInfo info, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    m_info = info;

    InitData(info);


}

Form::~Form()
{
    delete ui;
}

void Form::paintEvent(QPaintEvent *event)
{
}

void Form::InitData(AirlineInfo info)
{
    ui->txt_Arrive->setText(info.arrivePortName);
    ui->txt_Depart->setText(info.departPortName);

    ui->txt_DepartTime->setText(info.departTime);
    ui->txt_ArriveTime->setText(info.arriveTime);

    ui->txt_price->setText(info.price);

    ui->txt_craftType->setText(info.aircraftType);
    ui->label_3->setText(info.departDate);
}

void Form::on_btn_Order_clicked()
{
    emit SendOrderInfo(m_info);
}

