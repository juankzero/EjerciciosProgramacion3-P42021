#pragma once

#ifndef CHEQUE_H
#define CHEQUE_H

#include "Cuenta.h"

class Cheque : public Cuenta
{
private:
	float cuotaTransaccion;
	void cargarCuotaTransaccion();

public:
	Cheque(const char*, float, float);

	//overriding
	void deposito(float);
	void retiro(float);
};

#endif // !CHEQUE_H




