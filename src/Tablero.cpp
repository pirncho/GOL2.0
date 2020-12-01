#include "Tablero.h"

unsigned long int Tablero::getEdad()
{
	return this->edad;
}

Celula* Tablero::getCelula(int fila, int columna)
{
	return (*tablero)[fila][columna];
}

int* Tablero::getDimensiones()
{
	int* dim  = new int[]{ alto,ancho };
	return dim ;
}

Tablero::Tablero(int alto, int ancho)
{
	this->edad = 0;
	this->alto = alto;
	this->ancho = ancho;
	tablero = new std::vector<std::vector<Celula*>> (alto, std::vector<Celula*>(ancho, nullptr));
}
