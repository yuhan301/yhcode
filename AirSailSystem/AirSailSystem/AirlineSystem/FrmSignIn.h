#ifndef FRMSIGNIN_H
#define FRMSIGNIN_H

#include <QDialog>

namespace Ui {
class FrmSignIn;
}

class FrmSignIn : public QDialog
{
    Q_OBJECT

public:
    explicit FrmSignIn(QWidget *parent = nullptr);
    ~FrmSignIn();

private slots:
    void on_btn_logIn_clicked();

private:
    Ui::FrmSignIn *ui;
};

#endif // FRMSIGNIN_H
