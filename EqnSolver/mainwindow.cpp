#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->subBtn, &QPushButton::clicked, this, &MainWindow::eqnSolver);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*To convert str of the eqn to double*/
void MainWindow::strConvert()
{
    QString A1 = ui->aHere->text();
    a = A1.toDouble();

    QString B1 = ui->bHere->text();
    b = B1.toDouble();

    QString C1 = ui->cHere->text();
    c = C1.toDouble();
}

void MainWindow::eqnSolver()
{

}
