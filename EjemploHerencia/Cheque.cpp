#include "Cheque.h"

#include <iostream>

using std::invalid_argument;
using std::cout;

void Cheque::cargarCuotaTransaccion()
{
	establecerSaldo(obtenerSaldo() - cuotaTransaccion);
	cout << "\n- Cuota de transaccion aplicada: L " << cuotaTransaccion << std::endl;

}

Cheque::Cheque(const char* _nCuenta, float _saldo, float _cuotaTransac)
	: Cuenta(_nCuenta, _saldo), cuotaTransaccion(_cuotaTransac)
{
	if (_cuotaTransac >= 0)
		cuotaTransaccion = _cuotaTransac;
	else
		throw invalid_argument("\n- Cuota de Transaccion debe ser mayor a cero");
}

void Cheque::deposito(float _cantidad)
{
	Cuenta::deposito(_cantidad);
	cargarCuotaTransaccion();
}

bool Cheque::retiro(float _cantidad)
{
	bool resultado = Cuenta::retiro(_cantidad);

	if (resultado)
	{
		cargarCuotaTransaccion();
		return true;
	}

	return false;

}
