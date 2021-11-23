#include "TrianguloRectangulo.h"

#include <cmath>

#include <iostream>

TrianguloRectangulo::TrianguloRectangulo() : base(1), altura(1)
{}

TrianguloRectangulo::TrianguloRectangulo(float _base, float _altura) 
	: base(_base), altura(_altura)
{
	if (_base < 0 || _altura < 0)
	{
		base = altura = 1;
		throw std::invalid_argument("Base y Altura en TrianguloRectangulo debe ser mayor a cero.");
	}
}

float TrianguloRectangulo::obtenerArea() 
{
	return (base * altura) / 2;
}

float TrianguloRectangulo::obtenerPerimetro() 
{
	return base + altura + obtenerHipotenusa();
}

float TrianguloRectangulo::obtenerHipotenusa() 
{
	return (float)(sqrt(pow(base, 2) + pow(altura, 2)));
}

void TrianguloRectangulo::imprimirFigura() 
{
	std::cout << "\nTrianguloRectangulo { base: " << base << ", altura: "
		<< altura << ", hipotenusa: " << obtenerHipotenusa()
		<< ", area: " << obtenerArea() << ", perimetro: "
		<< obtenerPerimetro() << " }";
}

TipoInstancia TrianguloRectangulo::obtenerInstancia() 
{
	return TipoInstancia::iTrianguloRectangulo;
}