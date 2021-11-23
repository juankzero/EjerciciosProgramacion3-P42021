#include "Circulo.h"

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>



using std::invalid_argument;

#define PI 3.14159265

Circulo::Circulo() : radio(1)
{
}

Circulo::Circulo(float _radio) : radio(_radio)
{
	if (_radio < 0)
	{
		radio = 1;
		throw invalid_argument("Radio de Circulo debe ser mayor a cero.");
	}
}

float Circulo::obtenerArea()
{
	return (float)(M_PI * pow(radio, 2));
}

float Circulo::obtenerPerimetro()
{
	return 2 * M_PI * radio;
}

void Circulo::imprimirFigura() 
{
	std::cout << "\nCirculo { radio: " << radio << ", area: " << obtenerArea()
		<< ", perimetro: " << obtenerPerimetro() << " }";
}

TipoInstancia Circulo::obtenerInstancia() 
{
	return TipoInstancia::iCirculo;
}



