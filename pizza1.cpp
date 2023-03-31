#include "pizza1.h"
#include "ui_pizza1.h"

pizza1::pizza1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pizza1)
{
    ui->setupUi(this);
}

pizza1::~pizza1()
{
    delete ui;
}
