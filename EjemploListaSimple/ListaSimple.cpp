#include "ListaSimple.h"

#include <iostream>

using std::cout;

ListaSimple::ListaSimple()
	: primero(nullptr)
{
}

bool ListaSimple::estaVacia()
{
	return primero == nullptr;
}

void ListaSimple::agregarNodo(int _valor)
{
	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (estaVacia())
		primero = nuevo; //agregamos el primer elemento de la lista
	else
	{
		//me posiciono al inicio de la lista
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) 
		{
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}
}

void ListaSimple::eliminarNodo(int _valor)
{

	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	while (actual != nullptr)
	{
		if (actual->getValor() == _valor)
		{
			//eliminamos al primer elemento de la lista
			if (actual == primero)
				primero = actual->getSiguiente();
			else
				anterior->setSiguiente(actual->getSiguiente());

			delete actual;
			return;
		}

		anterior = actual;
		actual = actual->getSiguiente();

	}

}

void ListaSimple::imprimirLista()
{
	if (estaVacia())
		return;

	Nodo* actual = primero;

	while (actual != nullptr) 
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	}

	cout << "\n";
}


