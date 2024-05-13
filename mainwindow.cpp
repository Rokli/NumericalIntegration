#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Models/SimpleFactory.h"
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
    BasisFormethods* method;
    switch(ui->comboBox->currentIndex()){
    case 0:
        method = SimpleFactory::CreateLeftMethod();
        break;
    case 1:
        method = SimpleFactory::CreateRectangleMethod();
        break;
    default:
        break;
    }
    method->SetName();
    float i = 0;
    int k = 10;
    do{
        i++;
        diff = abs(method->Calculate(0.5,4.5,k * i) - method->Calculate(0.5,4.5,k * (i+1)));
    }while(diff > eps);
    addText(method->name + QString::number(method->Calculate(0.5,4.5,k * (i+1))));
}

void MainWindow::addText(QString text){
    ui->outputNumber->setPlainText(ui->outputNumber->toPlainText() + text + "\n");
}
