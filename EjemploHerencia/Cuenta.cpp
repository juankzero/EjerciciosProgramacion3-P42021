#include "Cuenta.h"

#include <iostream>

//using namespace std;

using std::invalid_argument;

Cuenta::Cuenta(const char* _nCuenta, float _saldo) 
	: numeroCuenta(nullptr), saldo(0)
{
	numeroCuenta = new char[strlen(_nCuenta) + 1];
	strcpy_s(numeroCuenta, strlen(_nCuenta) + 1, _nCuenta);

	if (_saldo > 0)
		saldo = _saldo;
	else
		throw invalid_argument("\n- Saldo inicial no puede ser negativo");
}

void Cuenta::deposito(float _cantidad)
{
	if (_cantidad < 0)
	{
		throw invalid_argument("\n- No se permiten depositos negativos");
		return;
	}

	saldo += _cantidad;
}

bool Cuenta::retiro(float _cantidad)
{
	if (_cantidad > saldo)
	{
		throw invalid_argument("\n- Cargo a la cuenta excede el saldo actual");
		return false;
	}

	saldo -= _cantidad;
	return true;
}

void Cuenta::establecerSaldo(float _saldoActualizado)
{
	saldo = _saldoActualizado;
}

float Cuenta::obtenerSaldo()
{
	return saldo;
}

char* Cuenta::obtenerNumeroCuenta()
{
	return numeroCuenta;
}


