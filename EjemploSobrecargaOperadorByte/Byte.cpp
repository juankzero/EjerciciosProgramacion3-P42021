#include "Byte.h"

Byte::Byte()
{
	//inicializar las posiciones de la coleccion de bits
	for (int i = 0; i < 8; i++) 
	{
		this->bits[i] = 0;
	}
}

Byte::Byte(const char* _bits)
{

	for (int i = 0; i < 8; i++) 
	{
		this->bits[i] = _bits[i] - 48;
	}

}

Byte& Byte::operator&(const Byte& _b2)
{
	
	Byte resultado;

	for (int i = 8 - 1; i >= 0; i-- ) 
	{
		if (this->bits[i] == 1 && _b2.bits[i] == 1)
			resultado.bits[i] = 1;
		else
			resultado.bits[i] = 0;
	}

	return resultado;
}

void Byte::operator|(const Byte& _b2)
{
	for (int i = 8 - 1; i >= 0; i-- ) 
	{
		if (this->bits[i] == 0 && _b2.bits[i] == 0)
			this->bits[i] = 0;
		else
			this->bits[i] = 1;
	}
}

Byte& Byte::operator++()
{
	*this = *this + Byte("00000001");
	return *this;
}

Byte& Byte::operator++(int)
{
	Byte resultado = *this;	
	*this = *this + Byte("00000001");

	return resultado;
}

Byte& operator+(const Byte& _b1, const Byte& _b2)
{
	Byte resultado;

	int acarreo = 0;

	for (int i = 8 - 1; i >= 0; i--) 
	{
		if (acarreo == 0)
		{
			if (_b1.bits[i] == 1 && _b2.bits[i] == 1)
			{
				resultado.bits[i] = 0;
				acarreo = 1;
			}
			else if (_b1.bits[i] == 0 && _b2.bits[i] == 0)
			{
				resultado.bits[i] = 0;
				acarreo = 0;
			}
			else
			{
				resultado.bits[i] = 1;
				acarreo = 0;
			}
		}
		else // cuando tengamos 1 como acarreo
		{
			int resultadoAcarreo = 0;

			if (_b1.bits[i] == 1)
			{
				resultadoAcarreo = 0;
				acarreo = 1;
			}
			else
			{
				resultadoAcarreo = 1;
				acarreo = 0;
			}

			if (resultadoAcarreo == 1 && _b2.bits[i] == 1)
			{
				resultado.bits[i] = 0;
				acarreo = 1;
			}
			else if (resultadoAcarreo == 1 && _b2.bits[i] == 0)
			{
				resultado.bits[i] = 1;
				acarreo = 0;
			}
			else if (resultadoAcarreo == 0 && _b2.bits[i] == 1)
				resultado.bits[i] = 1;
			else if (resultadoAcarreo == 0 && _b2.bits[i] == 0)
				resultado.bits[i] = 0;
		}

	
	}//fin for

	return resultado;

}

std::ostream& operator<<(std::ostream& out, const Byte& _byte)
{
	
	for (int i = 0; i < 8; i++)
	{
		out << _byte.bits[i];
	}

	return out;
}
