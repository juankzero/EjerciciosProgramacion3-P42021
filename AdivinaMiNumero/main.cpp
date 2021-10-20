#include <conio.h>
#include <iostream>

#include <cstdlib>
#include <time.h>

using std::cout;
using std::cin;

//definicion de prototipos de funcion

void juegoPrincipal();
bool esCorrecto(int, int);

int main() 
{
	//generacion de numeros aleatorios
	srand(time(NULL));

	juegoPrincipal();

	_getch();
}

void juegoPrincipal()
{
	int numeroIngresado, numeroAdivinar;
	char respuesta;

	do 
	{
		//se genera numero entre 1 y 1000
		numeroAdivinar = 1 + rand() % 1000;

		cout << "Tengo un numero entre 1 y 1000.\n"
			<< "Te atreves adivinarlo?\n"
			<< "Ingresa tu primera opcion.\n"
			<< "? ";

		cin >> numeroIngresado;

		while ( ! esCorrecto(numeroAdivinar, numeroIngresado))
			cin >> numeroIngresado;

		cout << "Excelente! Has descubierto el numero generado!\n"
			<< "Deseas volver a jugar? (y o n) ";
		cin >> respuesta;

		cout << "\n";
	
	} while ( respuesta == 'y' );


}

bool esCorrecto(int _numeroAdivinar, int _numeroIngresado) 
{
	if (_numeroAdivinar == _numeroIngresado)
		return true;

	if (_numeroIngresado < _numeroAdivinar)
		cout << "Muy bajo. Intentalo de nuevo.\n? ";
	else
		cout << "Muy alto. Intentalo de nuevo.\n? ";
	
	return false;
}