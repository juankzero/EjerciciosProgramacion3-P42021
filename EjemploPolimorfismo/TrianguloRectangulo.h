#pragma once

#ifndef TRECTANGULO_H
#define TRECTANGULO_H

#include "Figura2D.h"

class TrianguloRectangulo : public Figura2D
{
private:
	float base, altura;
	float obtenerHipotenusa();

public:
	TrianguloRectangulo(void);
	TrianguloRectangulo(float, float);

	//definicion de funciones a sobreescribir
	float obtenerArea();
	float obtenerPerimetro();
	void imprimirFigura();
	TipoInstancia obtenerInstancia();
};


#endif // !TRECTANGULO_H
