
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pizza1.h"
#include "dialog.h"
#include "vegetarian.h"
#include "dairy.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

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

