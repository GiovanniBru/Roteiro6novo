#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#define TAMANHO 20
#include "MesaDeRestaurante.h"

using namespace std;

class RestauranteCaseiro
{
    public:
    	MesaDeRestaurante getMesas(int i){
    	 return mesas[i];
    	}

		RestauranteCaseiro();
    	void adicionarAoPedido(Pedido, int);
        double calculaTotalRestaurante();

    private:
        MesaDeRestaurante mesas[TAMANHO];
};

#endif // RESTAURANTECASEIRO_H
