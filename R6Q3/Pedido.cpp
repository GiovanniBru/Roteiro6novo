#include "Pedido.h"

using namespace std;

void Pedido::setNumero(int num){
	numero = num;
}

void Pedido::setDescricao(string desc){
	descricao = desc;
}

void Pedido::setQuantidade(int quant){
	quantidade = quant;
}

void Pedido::setPreco(double val){
	preco = val;
}

int Pedido::getNumero(){
	return numero;
}

string Pedido::getDescricao(){
	return descricao;
}

int Pedido::getQuantidade(){
	return quantidade;
}

double Pedido::getPreco(){
	return preco;
}


Pedido::Pedido(int num, string desc, double val){
	setNumero(num);
	setDescricao(desc);
	setPreco(val);
}

Pedido::Pedido(){
}
