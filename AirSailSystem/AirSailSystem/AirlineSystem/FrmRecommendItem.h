#ifndef FRMRECOMMENDITEM_H
#define FRMRECOMMENDITEM_H

#include <QWidget>

namespace Ui {
class FrmRecommendItem;
}

class FrmRecommendItem : public QWidget
{
    Q_OBJECT

public:
    explicit FrmRecommendItem(QWidget *parent = nullptr);
    ~FrmRecommendItem();

private:
    Ui::FrmRecommendItem *ui;
};

#endif // FRMRECOMMENDITEM_H
