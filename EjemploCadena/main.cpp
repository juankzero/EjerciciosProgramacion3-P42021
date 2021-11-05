

#include <iostream>
#include <conio.h>

#include "Cadena.h"

using std::cout;

int main() 
{

	Cadena c1("Hola");
	Cadena c2(" Mundo!");

	Cadena c3 = c1 + c2;

	cout << c3;


	_getch();
}	