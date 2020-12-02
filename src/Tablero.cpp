#include "Tablero.h"

unsigned long int Tablero::getEdad()
{
	return this->edad;
}

Celula* Tablero::getCelula(int fila, int columna)
{
	return (tablero)[fila][columna];
}

int* Tablero::getDimensiones()
{
	int* dim  = new int[]{ alto,ancho };
	return dim ;
}


Tablero::Tablero(std::string rutaArchivo)
{
	std::string linea;
	std::vector<std::string> separada;
	std::ifstream archivo;
	archivo.open(rutaArchivo);
	while (std::getline(archivo, linea))
	{
		char caracter = linea[0];
		int palabra = 0;
		while (not linea.empty()){
			if (caracter == ' ') {
				palabra++;
			}
			else
			{
				separada[palabra].push_back(caracter);
			}
			linea.erase(linea.begin());
			caracter = linea[0];
		}
		if (separada[0] == "tablero") {
			this->alto = stoi(separada[1]);
			this->ancho = stoi(separada[2]);
			tablero = new Celula**[alto];
			for (int i = 0; i < alto; i++)
			{
				tablero[i] = new Celula * [ancho];
			}
		}


	}

	
}
