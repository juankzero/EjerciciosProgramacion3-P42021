#include "Empresa.h"

#include <iostream>
#include <fstream>

using std::ofstream;
using std::cout;
using std::ios;
using std::cin;

void Empresa::agregarEmpleados()
{
	cout << "*** I N G R E S O  D E  E M P L E A D O S ***\n\n";

	ofstream archivoEmpleados("empleados.dat", ios::app);

	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir el archivo empleados.dat\n";
		return;
	}

	int cantidadEmpleados;
	cout << "Indicar cantidad de empleados a ingresar: ";
	cin >> cantidadEmpleados;

	int codigoEmpleado;
	char nombreEmpleado[30];
	int codigoDepartamento;
	float salarioEmpleado;

	for (int i = 0; i < cantidadEmpleados; i++)
	{
		cout << "Empleado " << (i + 1) << ":\n";

		cout << "Ingrese codigo de Empleado: ";
		cin >> codigoEmpleado;

		cout << "Ingrese nombre de Empleado: ";
		cin >> nombreEmpleado;

		cout << "Ingrese codigo de departamento: ";
		cin >> codigoDepartamento;

		cout << "Ingrese salario de Empleado: ";
		cin >> salarioEmpleado;

		archivoEmpleados << codigoEmpleado << ' ' << nombreEmpleado
			<< ' ' << codigoDepartamento << ' ' << salarioEmpleado << '\n';
	}

	archivoEmpleados.close();

}
