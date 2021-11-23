#include <conio.h>

#include "Circulo.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

void imprimirFiguras(Figura2D* figura) 
{
	figura->imprimirFigura();
}

int main() 
{
	/*Circulo c1;
	Rectangulo r1(4, 3);
	TrianguloRectangulo tr1(6, 4);

	c1.imprimirFigura();
	r1.imprimirFigura();
	tr1.imprimirFigura();

	Figura2D* figura;

	figura = new Rectangulo(6, 8);
	figura->imprimirFigura();*/

	Figura2D* listaFiguras[2];
	listaFiguras[0] = new Circulo(6);
	listaFiguras[1] = new TrianguloRectangulo(2, 3.2);

	for (int i = 0; i < 2; i++)
		imprimirFiguras(listaFiguras[i]);


	_getch();
}