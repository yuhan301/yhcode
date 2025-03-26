#include "FrmLogIn.h"
#include "ui_FrmLogIn.h"
#include <QAction>
#include "database.h"
#include <QMessageBox>
#include "MyData.h"
#include "FrmSignIn.h"
#include "FrmSignIn.h"

FrmLogIn::FrmLogIn(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmLogIn)
{
    ui->setupUi(this);
    ui->passwordEdit->setEchoMode(QLineEdit::Password);

    QAction* userAction = new QAction(ui->usrEdit);
    QAction* passwordAction = new QAction(ui->passwordEdit);
    userAction->setIcon(QIcon(":/image/name"));
    passwordAction->setIcon(QIcon(":/image/password"));
    ui->usrEdit->addAction(userAction,QLineEdit::LeadingPosition);
    ui->passwordEdit->addAction(passwordAction,QLineEdit::LeadingPosition);
    connect(ui->btn_savePassword, &QCheckBox::stateChanged, this, [=](int state) {
        savePassword = (state == Qt::Checked);
    });
}

FrmLogIn::~FrmLogIn()
{
    delete ui;
}

void FrmLogIn::on_btn_logIn_clicked()
{
    if(!DataBase::Instance()->logIn(ui->usrEdit->text(), ui->passwordEdit->text()))
    {
        QMessageBox::warning(this, tr("Warning"),
                             tr("User name or password error!"),
                             QMessageBox::Yes);
        return;
    }

    MyData::m_strUserName = ui->usrEdit->text();
    emit logInSuccess();
    if (!savePassword)
    {
        ui->passwordEdit->clear();
    }
}

void FrmLogIn::on_btn_SignIn_clicked()
{
    FrmSignIn dlg;
    if(QDialog::Accepted == dlg.exec())
    {
    }

}
