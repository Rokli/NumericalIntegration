#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Models/AverageRectangleMethod.h"
#include "Models/LeftRectangleMethod.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    void addText(QString);
    Ui::MainWindow *ui;
    AverageRectangleMethod average;
    LeftRectangleMethod left;
    float a = 0.5,b = 4.5,eps = 0.001,diff;
    int h;
};
#endif // MAINWINDOW_H
