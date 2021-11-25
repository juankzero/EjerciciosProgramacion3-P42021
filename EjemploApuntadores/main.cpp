#include <conio.h>
#include <iostream>

using std::cout;

int cuboPorValor(int); // 4^3 = 64
void cuboPorReferencia(int*);

int main() 
{
	int x = 11;
	int* xPtr = nullptr;

	cout << "Valor de x: " << x << "\n";
	cout << "Valor de xPtr: " << xPtr << "\n";

	cout << "Direccion de memoria de x: " << &x << "\n";

	//& devuelve la direccion de memoria
	xPtr = &x;

	cout << "Direccion de memoria de xPtr: " << xPtr << "\n";

	//* devuelve el valor depositado en memoria
	*xPtr = 31;

	cout << "Valor de x: " << x << "\n";
	cout << "Valor de xPtr: " << xPtr << "\n";

	//Prueba de envios de variables por valor y referencia

	int base = 4; // 4^3
	cout << "\n\n\nDireccion de base antes de funcion: " << &base;

	int potencia = cuboPorValor(base);
	cout << "\nDireccion de base antes de funcion: " << &potencia;


	int* basePtr = &base;
	cout << "\nDireccion de base antes de funcion por referencia: " << basePtr;
	cuboPorReferencia(basePtr);
	cout << "\nResultado de cubo: " << *basePtr;
	cout << "\nValor de base: " << base;


	_getch();
}

int cuboPorValor(int _base) 
{
	cout << "\nDireccion de memoria de base en funcion: " << &_base;
	return _base * _base * _base;
}

//*var >> obtener el valor depositado en una direccion de memoria
//&var >> obtener la direccion de memoria de una variable por valor

void cuboPorReferencia(int* _base) 
{
	cout << "\nDireccion de memoria de base en funcion por referencia: " << _base;
	*_base = *_base * *_base * *_base;
}