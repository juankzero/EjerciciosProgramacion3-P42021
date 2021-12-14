
#include <conio.h>
#include <iostream>

#include <fstream>
#include <string>
#include <sstream>
#include <vector>

//using std::ifstream;
//using std::ios;
//using std::cout;

using namespace std;

void lecturaCsv();

int main() 
{
	
	lecturaCsv();

	_getch();
}

void lecturaCsv() 
{
	ifstream archivocsv("data.csv", ios::in);

	if (!archivocsv)
	{
		cout << "Error de lectura en archivo data.csv";
		return;
	}

	string linea;

	int cantidadRegistros = 0;
	while (cantidadRegistros < 30 + 1) 
	{
		//lectura de una fila/linea en archivo
		getline(archivocsv, linea);

		stringstream ss(linea);

		int posCaracter = 0;

		if (cantidadRegistros == 0)
			cout << "Header:\n";
		else
			cout << "\nRegister " << cantidadRegistros << ":\n";

		
		//recorrido por la cantidad de campos
		for (int i = 0; i < 20; i++) 
		{
			
			string valor;
			string aux;
			vector<string> artists;

			if (linea.at(posCaracter) == '\"' || linea.at(posCaracter) == '[')
			{
				if (linea.at(posCaracter) == '\"')
				{
					getline(ss, valor, '\"');
					getline(ss, valor, '\"');

					posCaracter += valor.length() + 2 + 1;

					getline(ss, aux, ',');
				}
				else
				{
					getline(ss, valor, ',');
					posCaracter += valor.length() + 1;
				}
				
				if (i == 2)
				{
					int posCaracAux = 1;
					string auxReader;
					stringstream ssAux(valor);

					section:
					getline(ssAux, auxReader, '\'');
					getline(ssAux, auxReader, '\'');
					artists.push_back(auxReader);
					posCaracAux += auxReader.length() + 2;
					if (valor.at(posCaracAux) == ',')
					{
						getline(ssAux, auxReader, ',');
						posCaracAux += 2;
						goto section;
					}
					
				}

				//getline(ss, aux, ',');

			}
			else
			{
				getline(ss, valor, ',');

				posCaracter += valor.length() + 1;
			}


			if(i == 2)
				cout << artists.size() << " " << valor << "\t";
			else //if (i == 7 || i == 13 || i == 15)
				cout << valor << "\t";
			
		}

		cantidadRegistros++;
	}

}
