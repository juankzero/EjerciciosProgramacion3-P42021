#include "Rectangulo.h"

#include <iostream>

using std::invalid_argument;

Rectangulo::Rectangulo(void) : base(1), altura(1)
{
}

Rectangulo::Rectangulo(float _base, float _altura)
	: base(_base), altura(_altura)
{
	if (_base < 0 || _altura < 0)
	{
		base = altura = 1;
		throw invalid_argument("Base y altura de Rectangulo debe ser mayor a cero.");
	}
}

float Rectangulo::obtenerArea() 
{
	return base * altura;
}

float Rectangulo::obtenerPerimetro() 
{
	return 2 * (base + altura);
}

void Rectangulo::imprimirFigura() 
{
	std::cout << "\nRectangulo { base: " << base << ", altura: "
		<< altura << ", area: " << obtenerArea() << ", perimetro: "
		<< obtenerPerimetro() << " }";
}

TipoInstancia Rectangulo::obtenerInstancia() 
{
	return TipoInstancia::iRectangulo;
}