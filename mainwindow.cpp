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


void MainWindow::on_pushButtonCriar_clicked()
{

    QString teste = ui->lineEditQuantidadeDeElementos->text();
    numero = teste.toInt();

    if(vetor != 0)
    {
        delete vetor;
    }
    teste.clear();
    vetor = new int[numero];
    srand(time(NULL));
    for(int i=0; i<numero; i++)
    {
        vetor[i] = rand() % 100;
        teste += QString::number(vetor[i])+"\n";
    }
    ui->lineEditVetorOriginal->setText(teste);

}

void MainWindow::on_pushButtonExecutar_clicked()
{
    QString teste;
    int regraOrdenacao = ui->comboBoxRegra->currentIndex();
    ped::Fila a(numero);
    for(int i=0; i<numero; i++)
    {
        a.inserir(vetor[i]);
    }

    if(regraOrdenacao == 1)
    {
        for(int i=numero-1; i>-1; i--)
        {
            vetor[i] = a.retirar();
        }
        for(int i=0; i<numero; i++)
        {
            teste += QString::number(vetor[i])+" ";
        }
        ui->lineEditVetorOrdenado->setText(teste);
        return;
    }
    while(a.quantidadeElementos)
    {
        teste += QString::number(a.retirar())+" ";
    }

    ui->lineEditVetorOrdenado->setText(teste);
}

