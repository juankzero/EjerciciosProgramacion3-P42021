#include <conio.h>
#include <iostream>

#include "ListaSimple.h"

int main() 
{
	ListaSimple ls;

	ls.agregarNodo(8);
	ls.agregarNodo(3);
	ls.agregarNodo(5);
	ls.agregarNodo(11);
	ls.agregarNodo(2);

	ls.imprimirLista();

	std::cout << "\nCantidad de elementos: " << ls.tamanoLista();



	/*ls.eliminarNodo(8);

	ls.imprimirLista();

	ls.eliminarNodo(11);

	ls.imprimirLista();

	ls.eliminarNodo(2);

	ls.imprimirLista();*/

	_getch();
}