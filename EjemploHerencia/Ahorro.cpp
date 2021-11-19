#include "Ahorro.h"

#include <iostream>

using std::invalid_argument;

Ahorro::Ahorro(const char* _nCuenta, float _saldo, float _interes)
	: Cuenta(_nCuenta, _saldo), intereses(_interes)
{
	if (_interes >= 0 and _interes <= 1)
		intereses = _interes;
	else
		throw invalid_argument("\n- Tasa de interes debe ser entre 0 y 1");

}

float Ahorro::calcularIntereses()
{
	return obtenerSaldo() * intereses;
}
