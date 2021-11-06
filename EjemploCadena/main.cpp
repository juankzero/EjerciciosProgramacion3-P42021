

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

	cout << "\nTamanio de Cadena: " << c3.size();
	cout << "\nCaracter en posicion 8: " << c3.at(8);

	cout << "\n\nCadena por caracter: ";

	for (int i = 0; i < c3.size(); i++) 
	{
		cout << "\n" << c3.at(i);
	}

	Cadena c4 = c3.substring(5, 5);
	Cadena c5 = c3.subcadena(5, 5);

	cout << "\n\nSubcadena: " << c4;
	cout << "\n\nSubcadena: " << c5;



	_getch();
}	