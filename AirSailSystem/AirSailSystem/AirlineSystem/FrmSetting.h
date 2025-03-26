#ifndef FRMSETTING_H
#define FRMSETTING_H

#include <QWidget>

#pragma execution_character_set("utf-8")

namespace Ui {
class FrmSetting;
}

class FrmSetting : public QWidget
{
    Q_OBJECT

public:
    explicit FrmSetting(QWidget *parent = nullptr);
    ~FrmSetting();

    void InitData();

private slots:
    void on_AgeButton_2_clicked();

    void on_PasswordButton_clicked();

private:
    Ui::FrmSetting *ui;
};

#endif // FRMSETTING_H
