#include "Cadena.h"

#include <iostream>

Cadena::Cadena(void)
{

	//reservar el espacio de memoria para valor

	//asignando cadena vacia
	valor = new char[1];
	valor[0] = '\0';

}

Cadena::Cadena(const char* _valor)
{
	//reservar el espacio de memoria
	valor = new char[strlen(_valor) + 1];

	//asignar el valor en la instancia
	strcpy_s(valor, strlen(_valor) + 1, _valor);

}

Cadena& operator+(const Cadena& _c1, const Cadena& _c2)
{
	Cadena resultado;

	//liberar la memoria asignada a la variable valor*
	delete resultado.valor;

	resultado.valor = new char[strlen(_c1.valor) + strlen(_c2.valor) + 1];

	strcpy_s(resultado.valor, strlen(_c1.valor) + 1, _c1.valor);
	strcat_s(resultado.valor, strlen(_c1.valor) + strlen(_c2.valor) + 1, _c2.valor);

	return resultado;

}

std::ostream& operator<<(std::ostream& cout, const Cadena& _c)
{
	cout << _c.valor;

	return cout;
}
