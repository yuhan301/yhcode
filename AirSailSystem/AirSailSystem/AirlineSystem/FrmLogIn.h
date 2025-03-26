#ifndef FRMLOGIN_H
#define FRMLOGIN_H

#include <QWidget>

#pragma execution_character_set("utf-8")

namespace Ui {
class FrmLogIn;
}

class FrmLogIn : public QWidget
{
    Q_OBJECT

public:
    explicit FrmLogIn(QWidget *parent = nullptr);
    ~FrmLogIn();

private slots:
    void on_btn_logIn_clicked();
    void on_btn_SignIn_clicked();

signals:

    void logInSuccess();

private:
    Ui::FrmLogIn *ui;
    bool savePassword=false;
};

#endif // FRMLOGIN_H
