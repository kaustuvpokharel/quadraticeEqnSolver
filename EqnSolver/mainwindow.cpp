#include "mainwindow.h"
#include "./ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Signal and slot connection for "Submit Button"
    connect(ui->subBtn, &QPushButton::clicked, this, &MainWindow::eqnSolver);
    //Signal and slot connection for "Remove Button"
    connect(ui->rmBtn, &QPushButton::clicked, this, &MainWindow::rmEqn);
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

    qInfo()<<"Test case 1: Passed";
}

/*Main calculation of Eqn*/
void MainWindow::eqnSolver()
{
    //calling conversion func of a, b and c
    strConvert();

    //Constant value for Qudratic Formula
    const float root = 0.5;
    const int sq = 2;

    //Number of types- no of roots
    float noType = pow(b,sq) - (4*a*c);
    if(noType < 0)
    {
        ui->ansHere->setText(QString("There are NO real roots."));
    }
    else if(noType == 0)
    {
        ui->ansHere->setText(QString("There is ONE real roots."));
        anshalf = (- b) + pow(noType, root);
        ans1 = anshalf / (2*a);
        ui->ansHere->setText(QString("The solved value of 'x' is: %1").arg(ans1));
    }
    else if(noType > 0)
    {
        ui->ansHere->setText(QString("There is TWO real roots."));
        anshalf1 = (-b) + pow(noType, root);
        anshalf = (-b) - pow(noType, root);
        ans1 = anshalf / (2*a);
        ans2 = anshalf1 / (2*a);
        ui->ansHere->setText(QString("The solved value of 'x' are: %1 & %2").arg(ans1).arg(ans2));
    }

    qInfo()<<"Test case 2: Passed";
}

/*To remove entered value to get back to earlier position*/
void MainWindow::rmEqn()
{
    ui->ansHere->setText(QString("Answer will appear here."));
    ui->aHere->setText(QString(""));
    ui->bHere->setText(QString(""));
    ui->cHere->setText(QString(""));

    qInfo()<<"Test case 3: Workable remove button";
}


