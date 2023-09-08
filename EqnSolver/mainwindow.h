#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <math.h>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Manual variable and function declarations
    double a, b, c;
    float anshalf, anshalf1, ans1, ans2;
    void strConvert();

public slots:
    //Slot to connect submit button to the input equation
    void eqnSolver();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
