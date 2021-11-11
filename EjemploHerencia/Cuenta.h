#pragma once

#ifndef CUENTA_H
#define CUENTA_H

class Cuenta
{
public:
	Cuenta(const char*, float);

	void deposito(float);
	void retiro(float);

	void establecerSaldo(float);
	float obtenerSaldo();

	char* obtenerNumeroCuenta();

private:
	char* numeroCuenta;
	float saldo;
};

#endif // !CUENTA_H




