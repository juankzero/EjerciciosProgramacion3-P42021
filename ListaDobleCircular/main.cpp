#include <conio.h>
#include "ListaCircular.h"


int main() 
{
	ListaCircular lc;

	lc.agregarElemento(4);
	lc.agregarElemento(2);
	lc.agregarElemento(5);
	lc.agregarElemento(8);

	lc.imprimir();



	_getch();
}