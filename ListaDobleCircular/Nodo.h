#pragma once

#ifndef NODO_H
#define NODO_H

class Nodo
{
private:
	int valor; // 4 bytes
	Nodo* siguiente; // 4 bytes
	Nodo* anterior; //4 bytes

public:
	Nodo();
	Nodo(int, Nodo*, Nodo*);

	void setValor(int);
	int getValor();

	void setSiguiente(Nodo*);
	Nodo* getSiguiente();

	void setAnterior(Nodo*);
	Nodo* getAnterior();

};

#endif // !NODO_H