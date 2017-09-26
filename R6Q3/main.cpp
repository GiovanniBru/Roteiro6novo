#include <iostream>
#include"Pedido.h"
#include"MesaDeRestaurante.h"
#include"RestauranteCaseiro.h"

using namespace std;

int main()
{
    int i;
    while(1){
        cout << "Restaurante Caseiro\n\n"
                "1- Listar Pedidos\n"
                "2- Zerar Pedidos\n"
                "3- Total da Mesa\n"
                "4- Calcular Total\n"
                "5- Sair\n";

        cin>>i;

        RestauranteCaseiro restaurante;

        restaurante.adicionarAoPedido(Pedido(1, "Refrigerante", 5.00), 1);

        restaurante.adicionarAoPedido(Pedido(2, "Batata Frita Grande", 15.00), 2);

        restaurante.adicionarAoPedido(Pedido(3, "Pizza", 20.00), 3);

        restaurante.adicionarAoPedido(Pedido(4, "Batata Frita Pequena", 7.00),4);

        restaurante.adicionarAoPedido(Pedido(5, "Hamburguer", 10.00), 5);

        switch(i)
        {
        case(1):
            cout << "" << restaurante.getMesas(1).getPedido();

        case(2):
            restaurante.getMesas(1).zeraPedidos();

            restaurante.getMesas(2).zeraPedidos();

            restaurante.getMesas(3).zeraPedidos();

            restaurante.getMesas(4).zeraPedidos();

            restaurante.getMesas(5).zeraPedidos();

        case(3):
            cout << "Total desta mesa: R$ " << restaurante.getMesas(1).calculaTotal() << "\n" << endl;

        case(4):
            cout << "Total arrecadado no dia: R$ " << restaurante.calculaTotalRestaurante() << "\n" << endl;

        case(5):
            break;
        default:
            cout<<"Erro."<<endl;
        }

        break;
    }
    return 0;
}
