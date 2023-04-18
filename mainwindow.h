#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>
#include <QMainWindow>
#include <ordenacao.h>
#include <fila.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int *vetor;
    int numero;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCriar_clicked();

    void on_pushButtonExecutar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
