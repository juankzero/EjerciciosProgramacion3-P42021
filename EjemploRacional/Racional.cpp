
#include "Racional.h"

#include <iostream>

using std::cout;

void Racional::simplificar()
{
}

//implementacion de constructores
Racional::Racional() : numerador(1), denominador(1)
{}

Racional::Racional(int _numerador, int _denominador) 
	: numerador(_numerador), denominador(_denominador)
{
	simplificar();
}

void Racional::imprimirRacional()
{
	// 8/3
	
	if (numerador == 0 && denominador == 0)
	{
		cout << "\nResultado no definido!";
		return;
	}
	else if (denominador == 0)
	{
		cout << "\nNo se puede dividir por cero!";
		return;
	}

	cout << "\nForma Racional: { " << numerador << "/" << denominador << " }";

}

void Racional::imprimirDecimal()
{
	// 2.667

	if (numerador == 0 && denominador == 0)
	{
		cout << "\nResultado no definido!";
		return;
	}
	else if (denominador == 0)
	{
		cout << "\nNo se puede dividir por cero!";
		return;
	}

	cout << "\nForma Decimal: { " << float(numerador) / float(denominador) << " }";

}
