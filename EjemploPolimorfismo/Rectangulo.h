#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura2D.h"

class Rectangulo : public Figura2D
{
private:
	float base, altura;

public:
	Rectangulo(void);
	Rectangulo(float, float);

	//definicion de funciones a sobreescribir
	float obtenerArea();
	float obtenerPerimetro();
	void imprimirFigura();
	TipoInstancia obtenerInstancia();

};

#endif // !RECTANGULO_H
