
#include <iostream>
#include <conio.h>

#include "Racional.h"


int main() 
{
	Racional r1(1, 2);
	Racional r2(3, 5);

	r1.imprimirRacional();
	r1.imprimirDecimal();

	r2.imprimirRacional();
	r2.imprimirDecimal();

	_getch();
}