#include <conio.h>

//#include "Cuenta.h"
#include "Ahorro.h"
#include "Cheque.h"

#include <iostream>

using std::cout;

int main() 
{
	Cuenta c1("C001", 200);
	Ahorro a1("C002", 500, .05);
	Cheque ch1("C003", 1000, 25);


	cout << "*** S A L D O S ***\n";
	cout << "Saldo C001: " << c1.obtenerSaldo() << "\n";
	cout << "Saldo C002: " << a1.obtenerSaldo() << "\n";
	cout << "Saldo C003: " << ch1.obtenerSaldo() << "\n";

	cout << "*** A B O N O S ***\n";
	c1.deposito(200);
	a1.deposito(300);
	ch1.deposito(600);

	cout << "*** S A L D O S  A C T U A L I Z A D O S ***\n";
	cout << "Saldo C001: " << c1.obtenerSaldo() << "\n";
	cout << "Saldo C002: " << a1.obtenerSaldo() << "\n";
	cout << "Saldo C003: " << ch1.obtenerSaldo() << "\n";

	cout << "*** R E T I R O S ***\n";
	c1.retiro(300);
	a1.retiro(500);
	ch1.retiro(1100);

	cout << "*** S A L D O S  A C T U A L I Z A D O S ***\n";
	cout << "Saldo C001: " << c1.obtenerSaldo() << "\n";
	cout << "Saldo C002: " << a1.obtenerSaldo() << "\n";
	cout << "Saldo C003: " << ch1.obtenerSaldo() << "\n";

	cout << "*** C A L C U L O  I N T E R E S E S ***\n";

	float intereses = a1.calcularIntereses();
	a1.establecerSaldo(a1.obtenerSaldo() + intereses);

	cout << "Intereses ganados C002: " << intereses << std::endl;

	cout << "*** S A L D O S  A C T U A L I Z A D O S ***\n";
	cout << "Saldo C001: " << c1.obtenerSaldo() << "\n";
	cout << "Saldo C002: " << a1.obtenerSaldo() << "\n";
	cout << "Saldo C003: " << ch1.obtenerSaldo() << "\n";



	_getch();
}