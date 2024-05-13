#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    // addText("Средние: " + QString::number(average.Calculate(0.5,4.5,1000)));
    // // addText("Левые: " + QString::number(left.Calculate(0.5,4.5,1000)));
    // float i = 0;
    // int k = 10;
    // do{
    //     i++;
    //     diff = abs(left.Calculate(0.5,4.5,k * i) - left.Calculate(0.5,4.5,k * (i+1)));
    // }while(diff > eps);
    // addText("Левые: " + QString::number(left.Calculate(0.5,4.5,k * (i+1))));
}

void MainWindow::addText(QString text){
    ui->outputNumber->setPlainText(ui->outputNumber->toPlainText() + text + "\n");
}
