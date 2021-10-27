#pragma once

#ifndef BYTE_H
#define BYTE_H

#include <iostream>

class Byte
{
	//definicion de funciones no miembro de clase
	friend Byte& operator+(const Byte&, const Byte&);
	
	friend std::ostream& operator<<(std::ostream&, const Byte&);

private:
	int bits[8];

public:
	//definicion de constructores
	Byte();
	Byte(const char*);



};

#endif // !BYTE_H




