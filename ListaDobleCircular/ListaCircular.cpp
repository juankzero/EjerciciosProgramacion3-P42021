#include "ListaCircular.h"
#include <iostream>

bool ListaCircular::existeElemento(int _valor)
{
	if (estaVacia())
		return false;

	Nodo* actual = primero;

	do 
	{
		if (actual->getValor() == _valor)
			return true;

		actual = actual->getSiguiente();

	} while (actual != primero);

	return false;
}

ListaCircular::ListaCircular()
	: primero(nullptr), ultimo(nullptr)
{
}

void ListaCircular::agregarElemento(int _valor)
{
	if (existeElemento(_valor))
	{
		std::cout << "\nElemento ya existe en ListaCircular";
		return;
	}

	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;	
	}

	ultimo->setSiguiente(primero);
	primero->setAnterior(ultimo);

}

bool ListaCircular::estaVacia()
{
	return primero == nullptr;
}

void ListaCircular::imprimir()
{
	if (estaVacia())
		return;

	Nodo* actual = primero;

	do
	{
		std::cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();

	} while (actual != primero);

	std::cout << "\n";
}

void ListaCircular::imprimirReversa()
{
	if (estaVacia())
		return;

	Nodo* actual = ultimo;

	do
	{
		std::cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();

	} while (actual != ultimo);

	std::cout << "\n";

}

void ListaCircular::eliminarElemento(int _valor) //valor de nodo a eliminar
{
	if (estaVacia())
		return;

	Nodo* actual = primero;

	do 
	{
		if (actual->getValor() == _valor)
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();

				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);
			}
			else if (actual == ultimo)
			{
				ultimo = actual->getAnterior();

				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);
			}
			else
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			return;

		}

		actual = actual->getSiguiente();

	} while (actual != primero);


}
