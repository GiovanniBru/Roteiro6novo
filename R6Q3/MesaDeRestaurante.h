#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include<string>
#include"Pedido.h"
#define TAMANHO 20

using namespace std;

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        Pedido getPedido();
        int getNumPedido();
        void adicionaPedido(Pedido);
        void zeraPedido();
        void calculaTotal();

    private:
        Pedido pedidos[TAMANHO];
        int numPedidos;
        double valorFinal;

};

#endif // MESADERESTAURANTE_H
