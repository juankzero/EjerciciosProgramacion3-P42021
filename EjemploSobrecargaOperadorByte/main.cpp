
#include <conio.h>
#include <iostream>

#include "Byte.h"

using std::cout;

int main() 
{
	Byte b0;
	Byte b1("10001110");
	Byte b2("00111011");

	cout << "Byte 0 { " << b0 << " }";
	cout << "\nByte 1 { " << b1 << " }";
	cout << "\nByte 2 { " << b2 << " }";

	Byte b3 = b1 + b2;

	cout << "\nByte 3 { " << b3 << " }";

	cout << "Valor decimal Byte3 { " << b3.obtenerDecimal() << " }";

	_getch();
}