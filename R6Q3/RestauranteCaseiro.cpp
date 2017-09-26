#include "RestauranteCaseiro.h"
#include"MesaDeRestaurante.h"
#include"Pedido.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionarAoPedido(Pedido ped, int numero)
{
    mesas[numero].adicionaPedido(ped);
}

void RestauranteCaseiro::CalculaTotalRestaurante()
{
    double total = 0.0;

    for(int i = 0; i < TAMANHO; i++){
        total+= mesas[i].calculaTotal();
    }

    return total;
}

RestauranteCaseiro::~RestauranteCaseiro()
{
    //dtor
}
