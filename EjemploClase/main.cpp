
#include <iostream>
#include <conio.h>

using std::cout;

class Numero
{
private:
	int valor;

public:

	Numero() : valor(0)
	{}

	Numero(int _valor) : valor(_valor)
	{
		if (valor < 0)
		{
			cout << "\nError! Numero debe ser positivo\n";
			valor = 0;
		}
	}

	void establecerValor(int _valor) 
	{
		if (_valor >= 0)
			this->valor = _valor;
		else
		{
			cout << "\nError! Numero debe ser positivo!\n";
			this->valor = 0;
		}

	}

	int obtenerValor() 
	{
		return this->valor;
	}

	bool esPar()
	{
		//if (this->valor % 2 == 0)
		//	return true;
		//else
		//	return false;

		return this->valor % 2 == 0;

	}

	bool esPrimo() 
	{
		int cantidadDivisores = 0;

		for (int i = 1; i <= this->valor; i++) 
		{
			if (this->valor % i == 0)
				cantidadDivisores++;
		}

		return cantidadDivisores == 2;
	}

	bool esMultiplo(Numero n2) 
	{
		int mayor = this->valor > n2.valor ? this->valor : n2.valor;
		int menor = this->valor < n2.valor ? this->valor : n2.valor;

		return mayor % menor == 0;

	}

};

int main() 
{
	Numero n1;
	Numero n2(12);

	cout << "n1: " << n1.obtenerValor();
	cout << "\nn2: " << n2.obtenerValor();

	Numero n3(-10);
	cout << "\nn3: " << n3.obtenerValor();

	n1.establecerValor(11);

	cout << "\nn1: " << n1.obtenerValor();
	cout << "\nn1 es " << (n1.esPar() ? "par" : "impar");

	cout << "\nn2 es " << (n2.esPrimo() ? "primo" : "compuesto");

	n1.establecerValor(9);
	n2.establecerValor(15);

	cout << "\nn1: " << n1.obtenerValor() << ", n2: " << n2.obtenerValor();
	cout << "\nn1 y n2 " << (n1.esMultiplo(n2) ? "son multiplos" : "no son multiplos");


	_getch();
}