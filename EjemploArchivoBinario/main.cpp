#include <conio.h>

#include "Empresa.h"

int main() 
{
	//EmpresaBin::agregarEmpleados();
	EmpresaBin::consultarEmpleados();

	EmpresaBin::modificarEmpleado(1001);

	EmpresaBin::consultarEmpleados();

	_getch();
}