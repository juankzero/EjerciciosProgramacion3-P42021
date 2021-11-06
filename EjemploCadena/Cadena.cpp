#include "Cadena.h"

#include <iostream>

using std::cout;

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

int Cadena::size()
{
	return strlen(valor);
}

char Cadena::at(int _pos)
{
	if (_pos >= size() || _pos < 0)
	{
		cout << "Posicion en cadena incorrecta!";
		return '\0';
	}

	return valor[_pos];
}

Cadena Cadena::substring(int _posini, int _cantidad)
{
	Cadena resultado;

	if (_posini >= size() || _posini < 0)
	{
		cout << "Posicion en cadena incorrecta!";
		return resultado;
	}

	delete resultado.valor;

	resultado.valor = new char[_cantidad + 1];
	
	int i, j;
	for (i = _posini, j = 0; i <= _posini + _cantidad - 1; i++, j++)
		resultado.valor[j] = valor[i];

	resultado.valor[j] = '\0';

	return resultado;
}

Cadena Cadena::subcadena(int _posini, int _cantidad)
{
	if (_posini >= size() || _posini < 0)
	{
		cout << "Posicion en cadena incorrecta!";
		return Cadena();
	}

	char* subcadena = new char[_cantidad + 1];

	memcpy_s(subcadena, _cantidad, &valor[_posini], _cantidad);
	subcadena[_cantidad] = '\0';

	return Cadena(subcadena);

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
