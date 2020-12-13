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
	int* dim  = new int[2]{ alto,ancho };	
	return dim ;
}


Tablero::Tablero(std::string rutaArchivo)
{
	Archivo archivo(rutaArchivo);
	std::vector<std::string>* linea;
	do
	{
		linea = archivo.getLinea();
		if ((*linea)[0] == "Tablero") {
			this->alto = std::stoi((*linea)[1]);
			this->ancho = std::stoi((*linea)[2]);
		}
	} while (linea);
}
