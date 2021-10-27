
#include <conio.h>
#include <iostream>

#include "Byte.h"

using std::cout;

int main() 
{

	Byte b1("10001110");
	Byte b2("00111011");

	Byte b3 = b1 + b2;

	cout << b3;

	_getch();
}