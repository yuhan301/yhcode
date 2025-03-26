#include "FrmAirlineTicketBooking.h"
#include "ui_FrmAirlineTicketBooking.h"
#include "database.h"
#include <QMessageBox>
#include "DlgOrderTicket.h"
#include<QMouseEvent>
FrmAirlineTicketBooking::FrmAirlineTicketBooking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmAirlineTicketBooking)
{
    ui->setupUi(this);
    QDate defaultDate(2024, 11, 15);
    ui->dateEdit_DepartDate->setDate(defaultDate);
    ui->DepartCity->setEditable(true);
    ui->ArriveCity->setEditable(true);
    ui->DepartCity->setCompleter(nullptr);
    ui->ArriveCity->setCompleter(nullptr);

    QString S = QString("SELECT CityName FROM citycode");
    QSqlQuery query(S);
    while(query.next())
    {
        QString cityName = query.value(0).toString();
        ui->DepartCity->addItem(cityName);
        ui->ArriveCity->addItem(cityName);
    }
}

FrmAirlineTicketBooking::~FrmAirlineTicketBooking()
{
    delete ui;
}

void FrmAirlineTicketBooking::on_btn_SigleSearch_clicked()
{
    QList<AirlineInfo> lstInfo;
    int Src=ui->DepartCity->currentIndex();
    int Dst=ui->ArriveCity->currentIndex();
    QString strSrc = ui->DepartCity->itemText(Src);
    QString strDst = ui->ArriveCity->itemText(Dst);
    QDate baseDate = ui->dateEdit_DepartDate->date();
    QDate departDateForward = baseDate;
    QDate departDateBackward = baseDate;
    int people=ui->spinBox_2->value();
    QString strDateForward = departDateForward.toString("yyyy-MM-dd");
    QString strDateBackward = departDateBackward.toString("yyyy-MM-dd");
    if (people < 1) {
        QMessageBox::warning(this, "提示", "购票人数必须至少为 1！", QMessageBox::Yes);
        return;
    }
    bool found = false;
    QDate foundDate;
    int attempts = 0;
    while (attempts < 10)
    {
        lstInfo = DataBase::Instance()->SearchSingleTicket(strSrc, strDst, strDateForward);
        if (lstInfo.count() > 0)
        {
            foundDate = departDateForward;
            found = true;
            break;
        }
        lstInfo = DataBase::Instance()->SearchSingleTicket(strSrc, strDst, strDateBackward);
        if (lstInfo.count() > 0)
        {
            foundDate = departDateBackward;
            found = true;
            break;
        }
        departDateForward = departDateForward.addDays(1);
        strDateForward = departDateForward.toString("yyyy-MM-dd");

        departDateBackward = departDateBackward.addDays(-1);
        strDateBackward = departDateBackward.toString("yyyy-MM-dd");
        qDebug() << "Forward Date: " << strDateForward;
        qDebug() << "Backward Date: " << strDateBackward;

        attempts++;
    }

    if (found)
    {
        DlgOrderTicket dlg;
        dlg.InitData(lstInfo);
        if(QDialog::Accepted ==   dlg.exec())
        {
            emit UpdateOrderInfo(dlg.m_info);
        }
    }
    else
    {
        QMessageBox msgBox(this);
        msgBox.setWindowTitle("警告");
        msgBox.setText("未查找到机票信息");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    }
}

void FrmAirlineTicketBooking::on_btn_Trans_clicked()
{
    int Src=ui->DepartCity->currentIndex();
    int Dst=ui->ArriveCity->currentIndex();
    int t=0;
    t=Src;
    Src=Dst;
    Dst=t;
    ui->DepartCity->setCurrentIndex(Src);
    ui->ArriveCity->setCurrentIndex(Dst);
}

void FrmAirlineTicketBooking::mouseDoubleClickEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        if (ui->DepartCity->geometry().contains(event->pos())) {
            ui->DepartCity->setFocus();
            ui->DepartCity->showPopup();
        } else if (ui->ArriveCity->geometry().contains(event->pos())) {
            ui->ArriveCity->setFocus();
            ui->ArriveCity->showPopup();
        }
    }
    QWidget::mouseDoubleClickEvent(event);
}





