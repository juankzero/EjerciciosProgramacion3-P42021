#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional
{
private:
	int numerador, denominador;
	void simplificar();

public:
	Racional();
	Racional(int, int);

	void imprimirRacional(); // 8/3
	void imprimirDecimal();  // 2.667

	Racional sumar(Racional);
	Racional restar(Racional);
	Racional multiplicar(Racional);
	Racional dividir(Racional);
	Racional potencia(int);

};


#endif // !RACIONAL_H




