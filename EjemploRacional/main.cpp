
#include <iostream>
#include <conio.h>

#include "Racional.h"


int main() 
{
	Racional r1(7, 4);
	Racional r2(11, 4);
	Racional r3(11, 7);

	r1.imprimirRacional();
	r1.imprimirDecimal();

	r2.imprimirRacional();
	r2.imprimirDecimal();
	
	r3.imprimirRacional();
	r3.imprimirDecimal();

	Racional r4 = r1.sumar(r2).multiplicar(r3).potencia(3);

	r4.imprimirRacional();
	r4.imprimirDecimal();

	Racional r5 = r1.sumar(r2);

	r5.imprimirRacional();
	r5.imprimirDecimal();

	_getch();
}