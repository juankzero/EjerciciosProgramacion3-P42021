#include <iostream>
#include <conio.h>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	//Clase string
	/*
	string nombreEstudiante = "Juan Zepeda";

	string apellidoEstudiante = nombreEstudiante.substr(5, 6);

	string nombreCompleto1 = nombreEstudiante + apellidoEstudiante;

	cout << "Estudiante: " << nombreEstudiante;
	cout << "\nApellido estudiante: " << apellidoEstudiante;
	*/

	//Cadenas en C con arreglos de tamano fijo

	/*char nombreEstudiante[20];
	char apellidoEstudiante[20];

	cout << "Cadenas con arreglos de tamano fijo\n\n";

	cout << "Ingrese nombre de estudiante: ";
	cin >> nombreEstudiante;
	cout << "Ingrese apellido de estudiante: ";
	cin >> apellidoEstudiante;

	char nombreCompleto[40];

	strcpy_s(nombreCompleto,
		strlen(nombreEstudiante) + 1,
		nombreEstudiante);
	strcat_s(nombreCompleto, 
		strlen(nombreCompleto) + strlen(apellidoEstudiante) + 1,
		apellidoEstudiante);

	cout << "Nombre completo: " << nombreCompleto;*/

	/*const char* nombreJugador = "Lionel";
	const char* apellidoJugador = "Messi";

	cout << "Longitud de nombre: " << strlen(nombreJugador);
	cout << "\nLongitud de apellido: " << strlen(apellidoJugador);

	char* nombreCompleto;
	nombreCompleto = new char[strlen(nombreJugador) + strlen(apellidoJugador) + 2];

	strcpy_s(nombreCompleto, strlen(nombreJugador) + 1, nombreJugador);

	nombreCompleto[strlen(nombreJugador)] = ' ';
	nombreCompleto[strlen(nombreJugador) + 1] = '\0';

	strcat_s(nombreCompleto, strlen(nombreCompleto) + strlen(apellidoJugador) + 1, apellidoJugador);

	//cout << "\nNombre completo de jugador: " << nombreCompleto;
	printf("\nNombre completo de jugador: %s", nombreCompleto);
	*/

	char arrayFijo[10] = "Hola";
	char* arrayDinamico;
	char caracter = 'P';

	arrayDinamico = arrayFijo;
	//strcpy_s(arrayDinamico)
	
	//x caracter = new char[10];


	cout << "\nArrayFijo { " << arrayFijo << " }";
	cout << "\nArrayDinamico { " << arrayDinamico << " }";
	//cout << "Caracter { " << caracter << " }";

	strcpy_s(arrayFijo, strlen("Maria") + 1, "Maria");

	cout << "\nArrayDinamico { " << arrayDinamico << " }";

	strcpy_s(arrayDinamico, strlen("123456789012") + 1, "123456789012");

	cout << "\nArrayFijo { " << arrayFijo << " }";


	_getch();
}