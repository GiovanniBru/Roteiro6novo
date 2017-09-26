#ifndef PEDIDO_H
#define PEDIDO_H
#include<iostream>

using namespace std;

class Pedido
{
    public:
        void setNumero(int);
        int getNumero();
        void setDescricao(string);
        string getDescricao();
        void setQuantidade(int);
        int getQuantidade();
        void setPreco(double);
        double getPreco();
        Pedido(int, string , double);
        Pedido();

    protected:

    private:
        int numero;
        string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
