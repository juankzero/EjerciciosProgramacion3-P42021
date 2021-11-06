#pragma 

#ifndef CADENA_H
#define CADENA_H

#include <iostream>

class Cadena
{
	friend Cadena& operator+(const Cadena&, const Cadena&);
	friend std::ostream& operator<<(std::ostream&, const Cadena&);

private:
	char* valor;

public:
	Cadena(void);
	Cadena(const char*);

	int size();
	char at(int);
	Cadena substring(int, int);
	Cadena subcadena(int, int);

};


#endif // !CADENA_H



