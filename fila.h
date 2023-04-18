#ifndef FILA_H
#define FILA_H
#include <QString>

namespace ped{
class Fila
{
private:
    int tamanho;
    int *array;
    int inicio;
    int fim;
public:
    int quantidadeElementos;
    Fila(int tamanho);
    void inserir(int elemento);
    bool estaVazia()const;
    bool estaCheia()const;
    int retirar();
    int acessar()const;
    ~Fila();
};
}
#endif // FILA_H
