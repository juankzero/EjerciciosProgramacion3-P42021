#pragma once

#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include "Nodo.h"

class ListaSimple
{
private:
	Nodo* primero;

public:
	ListaSimple();

	bool estaVacia();
	void agregarNodo(int);
	void eliminarNodo(int);//valor del nodo a eliminar

	void imprimirLista();
	int tamanoLista();

};


#endif // !LISTA_SIMPLE_H



