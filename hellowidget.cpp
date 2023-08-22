#include "hellowidget.h"
#include "ui_hellowidget.h"

helloWidget::helloWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::helloWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("你好Qthello你好");
}

helloWidget::~helloWidget()
{
    delete ui;
}

