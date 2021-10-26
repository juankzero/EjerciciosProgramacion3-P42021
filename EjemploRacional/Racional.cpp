
#include "Racional.h"

#include <iostream>
#include <cmath>

using std::cout;

void Racional::simplificar()
{

	int nmayor = this->numerador > this->denominador ? this->numerador : this->denominador;

	for (int i = 2; i <= nmayor; i++)
	{
		if (this->numerador % i == 0 && this->denominador % i == 0)
		{
			//this->numerador = this->numerador / i;

			this->numerador /= i;
			this->denominador /= i;

			nmayor = this->numerador > this->denominador ? this->numerador : this->denominador;

			i = 1;
		}

	}

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

Racional Racional::sumar(Racional r2)
{
	//caso con denominadores iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador + r2.numerador, this->denominador);
	else
		return Racional((this->numerador * r2.denominador) + (r2.numerador * this->denominador), 
			this->denominador * r2.denominador);
}

Racional Racional::restar(Racional r2)
{
	//caso con denominadores iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador - r2.numerador, this->denominador);
	else
		return Racional((this->numerador * r2.denominador) - (r2.numerador * this->denominador),
			this->denominador * r2.denominador);
}

Racional Racional::multiplicar(Racional r2)
{
	return Racional(this->numerador * r2.numerador, this->denominador * r2.denominador);
}

Racional Racional::dividir(Racional r2)
{
	return Racional(this->numerador * r2.denominador, this->denominador * r2.numerador);
}

Racional Racional::potencia(int exp)
{
	return Racional(pow(this->numerador, exp), pow(this->denominador, exp));
}
