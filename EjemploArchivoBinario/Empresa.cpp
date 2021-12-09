#include "Empresa.h"

#include <fstream>
#include <iostream>

using namespace std;



void EmpresaBin::agregarEmpleados()
{
	ofstream archivoEmpleado("empleados.bin", ios::out | ios::app | ios::binary);

	if (!archivoEmpleado)
	{
		cout << "Error al intentar abrir el archivo empleados.bin\n";
		return;
	}

	int codigoEmpleado;
	char nombreEmpleado[30];
	int codigoDepartamento;
	float salarioEmpleado;

	Empleado nuevo;

	cout << "***  A G R E G A R  E M P L E A D O S ***\n\n";

	int cantidad;
	cout << "Indique cantidad de empleados a salvar: ";
	cin >> cantidad;

	for (int i = 0; i < cantidad; i++) 
	{
		cout << "Indique codigo de Empleado: ";
		cin >> nuevo.codigoEmpleado;

		cout << "Indique nombre de Empleado: ";
		cin >> nuevo.nombreEmpleado;

		cout << "Indique codigo de Departamento: ";
		cin >> nuevo.codigoDepartamento;

		cout << "Indique salario de Empleado: ";
		cin >> nuevo.salarioEmpleado;

		/*archivoEmpleado.write(reinterpret_cast<const char*>(&codigoEmpleado), sizeof(int));
		archivoEmpleado.write(reinterpret_cast<const char*>(&nombreEmpleado), sizeof(nombreEmpleado));
		archivoEmpleado.write(reinterpret_cast<const char*>(&codigoDepartamento), sizeof(int));
		archivoEmpleado.write(reinterpret_cast<const char*>(&salarioEmpleado), sizeof(float));*/

		archivoEmpleado.write(reinterpret_cast<const char*>(&nuevo), sizeof(Empleado));

		cout << "Registro almacenado!\n";
	}

	archivoEmpleado.close();

}
