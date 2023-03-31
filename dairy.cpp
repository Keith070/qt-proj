#include "dairy.h"
#include "ui_dairy.h"

Dairy::Dairy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dairy)
{
    ui->setupUi(this);
}

Dairy::~Dairy()
{
    delete ui;
}
