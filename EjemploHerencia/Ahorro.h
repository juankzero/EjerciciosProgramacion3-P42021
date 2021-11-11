#pragma once

#ifndef AHORRO_H
#define AHORRO_H

#include "Cuenta.h"

//definicion de herencia en c++
class Ahorro : public Cuenta
{
private:
	float intereses;

public:
	Ahorro(char*, float, float);

	float calcularIntereses();

};

#endif // !AHORRO_H




