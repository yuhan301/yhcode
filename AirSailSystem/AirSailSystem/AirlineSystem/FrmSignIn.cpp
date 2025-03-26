#include "FrmSignIn.h"
#include "ui_FrmSignIn.h"
#include <QMessageBox>
#include "database.h"

FrmSignIn::FrmSignIn(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FrmSignIn)
{
    ui->setupUi(this);

    setWindowFilePath("注册");
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
}

FrmSignIn::~FrmSignIn()
{
    delete ui;
}

void FrmSignIn::on_btn_logIn_clicked()
{
    QString user;
    QString pwd;
    QString eMail;
    user=ui->usrEdit->text();
    pwd=ui->passwordEdit->text();
    eMail = ui->EMailEdit->text();
    if(user=="")
        QMessageBox::warning(this,"","用户名不能为空");
    else if (pwd=="")
        QMessageBox::warning(this,"","密码不能为空");
    else
    {
        if(DataBase::Instance()->FindUser(user))
        {
            QMessageBox::warning(this,"ERROR","用户名重复");
        }
        else
        {
            if(DataBase::Instance()->signIn(user, pwd, eMail))
            {
                QMessageBox::information(this,"提示","注册成功！！",QMessageBox::Yes);
                accept();
            }
            else
            {
                QMessageBox::warning(this,"ERROR","注册失败，请重试！！");
            }
        }
    }
}

