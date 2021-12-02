#pragma once

#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

#include "Nodo.h"

class ListaCircular
{
private:
	Nodo* primero, *ultimo;

	bool existeElemento(int);

public:
	ListaCircular();

	void agregarElemento(int);
	void insertarElemento(int, int);

	bool estaVacia();

	void imprimir();
	void imprimirReversa();

	void eliminarElemento(int);
};

#endif // !LISTA_CIRCULAR_H

