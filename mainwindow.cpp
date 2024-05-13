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
    int Q;
    BasisFormethods* method = SimpleFactory::ChangeMethod(ui->comboBox->currentIndex());
    method->SetName();
    if(ui->comboBox->currentIndex() == 1)
        Q = 1/3;
    else
        Q = 1;
    int k = ui->partition->text().toFloat();
    float a = ui->startA->text().toFloat(),b = ui->endB->text().toFloat(),
          eps = ui->epsW->text().toFloat(),diff,i = 0;

    do{
        i++;
        diff = abs(method->Calculate(a,b,k * i) - method->Calculate(a,b,k * (i+1)));
    }while(Q * diff > eps);

    addText(method->name + QString::number(method->Calculate(0.5,4.5,k * (i+1))));
}

void MainWindow::addText(QString text){
    ui->outputNumber->setPlainText(ui->outputNumber->toPlainText() + text + "\n");
}
