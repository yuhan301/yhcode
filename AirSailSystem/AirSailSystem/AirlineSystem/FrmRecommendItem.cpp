#include "FrmRecommendItem.h"
#include "ui_FrmRecommendItem.h"

FrmRecommendItem::FrmRecommendItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FrmRecommendItem)
{
    ui->setupUi(this);
}

FrmRecommendItem::~FrmRecommendItem()
{
    delete ui;
}
