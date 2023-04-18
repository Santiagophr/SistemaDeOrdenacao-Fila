#include "fila.h"

namespace ped{
Fila::Fila(int tamanho):
    inicio(-1),
    fim(-1),
    quantidadeElementos(0)
{
    if(tamanho <= 0) throw QString("Erro. Tamanho não pode ser <= 0");
    {
            try {
            array = new int[tamanho];
            this->tamanho = tamanho;
        } catch (std::bad_alloc &erro) {
            throw QString("Fila nao foi criada");
        }
    }

}
Fila::~Fila()
{
    if(array) delete[] array;
}
bool Fila::estaVazia()const
{
    return (quantidadeElementos == 0);
}
bool Fila::estaCheia()const
{
    return (quantidadeElementos == tamanho);
}
int Fila::acessar()const
{
    if(estaVazia()) throw QString("A fila nao pode estar vazia");
    return array[fim];
}
void Fila::inserir(int elemento)
{
    if(estaCheia()) return;
    if(inicio == -1) fim = inicio = 0;
    if(fim == tamanho) fim = 0;
    int i=fim;
    for(;i>0&&elemento < array[i-1];i--)
    {
        array[i] = array[i-1];
    }

    array[i] = elemento;
    fim++;
    quantidadeElementos++;
}
int Fila::retirar()
{
    if(estaVazia()) return 0;
    int aux = array[inicio];
    inicio++;
    if(inicio == tamanho) inicio = 0;
    quantidadeElementos--;
    return aux;
}



}
