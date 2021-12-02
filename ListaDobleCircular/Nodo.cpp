#include "Nodo.h"

Nodo::Nodo() : valor(-1), anterior(nullptr), siguiente(nullptr)
{
}

Nodo::Nodo(int _valor, Nodo* _anterior, Nodo* _siguiente)
	: valor(_valor), anterior(_anterior), siguiente(_siguiente)
{
}

void Nodo::setValor(int _valor)
{
	this->valor = _valor;
}

int Nodo::getValor()
{
	return this->valor;
}

void Nodo::setSiguiente(Nodo* _siguiente)
{
	this->siguiente = _siguiente;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}

void Nodo::setAnterior(Nodo* _anterior) 
{
	this->anterior = _anterior;
}

Nodo* Nodo::getAnterior() 
{
	return this->anterior;
}