#include "MesaDeRestaurante.h"
#include"Pedido.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    numPedidos = 0;
    valorFinal =  0.0;
    //ctor
}

void MesaDeRestaurante::adicionaPedido(Pedido ped)
{
    pedidos[numPedidos] = ped;
    valorFinal += ped.getPreco();
    numPedidos++;

}

void MesaDeRestaurante::zeraPedido()
{

	for(int i = 0; i < numPedidos; i++){
		pedidos[i].setQuantidade(0);
	}

	valorFinal = 0.0;


}

void MesaDeRestaurante::calculaTotal()
{
    return valorFinal;
}

void MesaDeRestaurante::getPedido()
{
    return pedidos[numPedidos];
}

void MesaDeRestaurante::getNumPedido()
{
    return numPedidos;
}

MesaDeRestaurante::~MesaDeRestaurante()
{
    //dtor
}
