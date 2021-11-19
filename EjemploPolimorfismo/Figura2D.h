#pragma once

#ifndef FIGURA2D_H
#define FIGURA2D_H

enum TipoInstancia 
{
	iCirculo,
	iRectangulo,
	iTrianguloRectangulo
};

class Figura2D 
{
public:
	//funcion/metodo virtual hace mi clase abstracta
	virtual float obtenerArea() = 0;
	virtual float obtenerPerimetro() = 0;
	virtual void imprimirFigura() = 0;

	virtual TipoInstancia obtenerInstancia() = 0;
};

#endif // !FIGURA2D_H
