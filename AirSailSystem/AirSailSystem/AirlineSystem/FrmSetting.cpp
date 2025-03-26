#include "FrmSetting.h"
#include "ui_FrmSetting.h"
#include "database.h"
#include "MyData.h"
#include <QMessageBox>
#include <QDebug>

FrmSetting::FrmSetting(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmSetting)
{
    ui->setupUi(this);
    ui->MailEdit->setReadOnly(true);
    ui->PasswordEdit->setReadOnly(true);
    ui->PasswordEdit->setEchoMode(QLineEdit::Password);
    ui->AgeButton_2->setStyleSheet("color: black;");
    ui->PasswordButton->setStyleSheet("color: black;");
    ui->AgeButton_2->setText("修改邮箱");
    ui->PasswordButton->setText("修改密码");
}

FrmSetting::~FrmSetting()
{
    delete ui;
}

void FrmSetting::InitData()
{
    QString strMaill;
    QString strPassword;
    if (DataBase::Instance()->QueryEmail(MyData::m_strUserName, strMaill)) {
        ui->MailEdit->setText(strMaill);
    } else {
        qDebug() << "Failed to query email for user:" << MyData::m_strUserName;
        ui->MailEdit->setText("查询失败");
    }
    if (DataBase::Instance()->QueryPassword(MyData::m_strUserName, strPassword)) {
        ui->PasswordEdit->setText("******");
    } else {
        qDebug() << "Failed to query password for user:" << MyData::m_strUserName;
        ui->PasswordEdit->setText("查询失败");
    }
    ui->MailEdit->setReadOnly(true);
    ui->PasswordEdit->setReadOnly(true);
}

void FrmSetting::on_AgeButton_2_clicked()
{
    if (ui->MailEdit->isReadOnly())
    {
        ui->MailEdit->setReadOnly(false);
        ui->AgeButton_2->setText("保存邮箱");
    }
    else
    {
        QString strEmail = ui->MailEdit->text();
        if (strEmail.isEmpty())
        {
            QMessageBox::warning(this, "提示", "邮箱不能为空！", QMessageBox::Yes);
            return;
        }
        if (DataBase::Instance()->ModifyEMail(MyData::m_strUserName, strEmail))
        {
            QMessageBox::information(this, "提示", "邮箱修改成功！", QMessageBox::Yes);
        }
        else
        {
            QMessageBox::warning(this, "提示", "邮箱修改失败！", QMessageBox::Yes);
        }
        ui->MailEdit->setReadOnly(true);
        ui->AgeButton_2->setText("修改邮箱");
    }
}
void FrmSetting::on_PasswordButton_clicked()
{
    if (ui->PasswordEdit->isReadOnly())
    {
        ui->PasswordEdit->setReadOnly(false);
        ui->PasswordButton->setText("保存密码");
    }
    else
    {
        QString strPassWord = ui->PasswordEdit->text();
        if (strPassWord.isEmpty())
        {
            QMessageBox::warning(this, "提示", "密码不能为空！", QMessageBox::Yes);
            return;
        }
        if (DataBase::Instance()->ModifyPassword(MyData::m_strUserName, strPassWord))
        {
            QMessageBox::information(this, "提示", "密码修改成功！", QMessageBox::Yes);
        }
        else
        {
            QMessageBox::warning(this, "提示", "密码修改失败！", QMessageBox::Yes);
        }
        ui->PasswordEdit->setReadOnly(true);
        ui->PasswordButton->setText("修改密码");
    }
}

