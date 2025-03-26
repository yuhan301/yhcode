#ifndef FORM_H
#define FORM_H
#include <QWidget>
#include <QPainter>
#include "DataStruct.h"

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(AirlineInfo info, QWidget *parent = nullptr);
    ~Form();

protected:

    void paintEvent(QPaintEvent *event);

private slots:
    void on_btn_Order_clicked();

private:
    void InitData(AirlineInfo info);

signals:

    void SendOrderInfo(AirlineInfo info);

private:
    Ui::Form *ui;

    AirlineInfo m_info;
};

#endif // FORM_H
