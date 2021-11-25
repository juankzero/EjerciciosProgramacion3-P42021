#include <conio.h>

#include <iostream>
#include <vector>

#include "Circulo.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

using std::vector;

void imprimirFiguras(Figura2D* figura) 
{
	if (figura->obtenerInstancia() == TipoInstancia::iCirculo
		|| figura->obtenerInstancia() == TipoInstancia::iRectangulo)
		figura->imprimirFigura();
	else
		std::cout << "\nHipotenusa: { " << 
		((TrianguloRectangulo*)figura)->obtenerHipotenusa()
		<< " }";
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

	/*Figura2D* listaFiguras[2];
	listaFiguras[0] = new Circulo(6);
	listaFiguras[1] = new TrianguloRectangulo(2, 3.2);

	for (int i = 0; i < 2; i++)
		imprimirFiguras(listaFiguras[i]);*/

	//Casteo entre clases de la Jerarquia

	Figura2D* listaFiguras[3];

	listaFiguras[0] = new TrianguloRectangulo(3, 2);
	listaFiguras[1] = new Circulo(2.1);
	listaFiguras[2] = new Rectangulo(1,2.5);

	for(int i = 0; i < 3; i++)
		imprimirFiguras(listaFiguras[i]);

	//arreglo dinamico
	//vector de Figuras
	vector<Figura2D*> vFiguras;

	vFiguras.push_back(new Circulo(3.9));
	vFiguras.push_back(new Circulo(2.1));
	vFiguras.push_back(new TrianguloRectangulo(1.8, 2));
	vFiguras.push_back(new Rectangulo(3,1.9));
	vFiguras.push_back(new TrianguloRectangulo(2, 1.6));

	std::cout << "\nCantidad de elementos en vector: " << vFiguras.size();

	for (int i = 0; i < vFiguras.size(); i++)
		vFiguras[i]->imprimirFigura();

	_getch();
}