#pragma once

#ifndef EMPRESA_H
#define EMPRESA_H

struct Empleado
{
	int codigoEmpleado;
	char nombreEmpleado[30];
	int codigoDepartamento;
	float salarioEmpleado;
};

class EmpresaBin
{
public:
	static void agregarEmpleados();
	static void consultarEmpleados();

	static void modificarEmpleado(int);
};

#endif // !EMPRESA_H



