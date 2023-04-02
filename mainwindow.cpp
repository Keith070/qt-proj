
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pizza1.h"
#include "dialog.h"
#include "vegetarian.h"
#include "dairy.h"
#include <vector>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

struct itemFav
{
    std::string itemName;
    int itemFav;
};

std:: vector<itemFav> v;

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButtonViewSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_clicked()
{
    pizza1 piz1;
    piz1.setModal(true);
    piz1.exec();
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    Dialog piz2;
    piz2.setModal(true);
    piz2.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    Vegetarian piz2;
    piz2.setModal(true);
    piz2.exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    Dairy piz2;
    piz2.setModal(true);
    piz2.exec();
}


void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    std::string str;
    for(int i=0; i < v.size(); i++)
    {
        str = v[i].itemName;
                  ui->listWidget->addItem(str.c_str());
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    itemFav id;
    id.itemName = "Pepperoni Pizza";
    id.itemFav = 1;

    v.push_back(id);
}


void MainWindow::on_pushButton_9_clicked()
{
    itemFav id;
    id.itemName = "Gluten Free Pizza";
    id.itemFav = 2;

    v.push_back(id);
}


void MainWindow::on_pushButton_10_clicked()
{
    itemFav id;
    id.itemName = "Vegan Pizza";
    id.itemFav = 3;

    v.push_back(id);
}


void MainWindow::on_pushButton_11_clicked()
{
    itemFav id;
    id.itemName = "Dairy-Free Pizza";
    id.itemFav = 4;

    v.push_back(id);
}

