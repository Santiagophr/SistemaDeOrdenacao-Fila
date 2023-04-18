#ifndef ORDENACAO_H
#define ORDENACAO_H
#include <random>
#include <iostream>
#include <QString>

namespace ped{
class Ordenacao
{
private:
    int numeroElementos;
    int regraOrdenacao;
public:
    Ordenacao(int numeroElementos, int regraOrdenacao);
    QString gerarNumerosAleatorios();
    QString ordenarVetor();
};
}
#endif // ORDENACAO_H
