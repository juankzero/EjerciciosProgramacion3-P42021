#pragma once

#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura2D.h"

class Circulo : public Figura2D
{
private:
	float radio;

public:
	Circulo();
	Circulo(float);

	//overriding functions
	float obtenerArea();
	float obtenerPerimetro();
	void imprimirFigura();
	TipoInstancia obtenerInstancia();


};

#endif // !CIRCULO_H




