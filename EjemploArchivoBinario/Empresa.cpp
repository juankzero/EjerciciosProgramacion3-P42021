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

void EmpresaBin::consultarEmpleados()
{
	cout << "***  I M P R I M I R  E M P L E A D O S ***\n\n";

	ifstream archivoEmpleado("empleados.bin", ios::in | ios::binary);

	if (!archivoEmpleado)
	{
		cout << "Error al intentar abrir el archivo empleados.bin\n";
		return;
	}

	//seekg -> permite colocar el cursor de lectura en una posicion x

	//colocar el cursor de lectura en el byte 0 (inicio del archivo)
	archivoEmpleado.seekg(0, ios::beg);

	Empleado actual;
	archivoEmpleado.read(reinterpret_cast<char*>(&actual), sizeof(Empleado));

	//si es el final del archivo (end of file)
	while (!archivoEmpleado.eof()) 
	{
		cout << "Empleado { codigo: " << actual.codigoEmpleado << ", nombre: " <<
			actual.nombreEmpleado << ", codigoDpto: " << actual.codigoDepartamento <<
			", salario: " << actual.salarioEmpleado << " }\n";
		
		archivoEmpleado.read(reinterpret_cast<char*>(&actual), sizeof(Empleado));
	}

	archivoEmpleado.close();

}

void EmpresaBin::modificarEmpleado(int _codigoEmpleado)
{
	fstream archivoEmpleado("empleados.bin", ios::in | ios::out | ios::binary);

	if (!archivoEmpleado)
	{
		cout << "Error al intentar abrir el archivo empleados.bin\n";
		return;
	}

	archivoEmpleado.seekg(0, ios::beg);
	long posicionArchivo = 0;

	Empleado actual;
	archivoEmpleado.read(reinterpret_cast<char*>(&actual), sizeof(Empleado));

	

	while (!archivoEmpleado.eof()) 
	{
		if (actual.codigoEmpleado == _codigoEmpleado)
		{
			cout << "Indique salario a modificar: ";
			float nuevoSalario;
			cin >> nuevoSalario;
			actual.salarioEmpleado = nuevoSalario;

			archivoEmpleado.seekp(posicionArchivo, ios::beg);
			archivoEmpleado.write(reinterpret_cast<const char*>(&actual), sizeof(Empleado));
			archivoEmpleado.close();

			cout << "Registro modificado!\n";
			return;

		}
		posicionArchivo = archivoEmpleado.tellg();
		archivoEmpleado.read(reinterpret_cast<char*>(&actual), sizeof(Empleado));
	}

	cout << "Registro no encontrado!\n";
	archivoEmpleado.close();

}
