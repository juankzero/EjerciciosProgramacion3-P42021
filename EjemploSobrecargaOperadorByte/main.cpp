
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

	//cout << "Valor decimal Byte3 { " << b3.obtenerDecimal() << " }";


	Byte b4 = b3 & b2; //AND

	cout << "\nb3 & b2 = { " << b4 << " }";

	b1 | b4; //OR

	cout << "\nb1 | b2 = { " << b1 << " }";
	cout << "\nByte 4 { " << b4 << " }";

	Byte b5("00000100");
	Byte b6 = b5++; //posincremento
	cout << "\nByte 6 { " << b6 << " }"; //valor de b5 antes del aumento
	cout << "\nByte 5 { " << b5 << " }"; //valor de b5 posterior al aumento

	Byte b7("00000001");
	Byte b8 = ++b7; //preincremento
	cout << "\nByte 8 { " << b8 << " }"; //valor de b7
	cout << "\nByte 7 { " << b7 << " }"; //valor de b7



	_getch();
}