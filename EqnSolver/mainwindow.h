#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    double a, b, c;
    double x1, x2;
    void strConvert();

public slots:
    void eqnSolver();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
