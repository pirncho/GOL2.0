#pragma once
#include "celula.h"
#include <vector>
class Tablero
{
private:
	int alto;
	int ancho;
	unsigned long int edad;
	std::vector<std::vector<Celula*>>* tablero;
public:
	unsigned long int getEdad();
	Celula* getCelula(int fila, int columna);
	int* getDimensiones();
	Tablero(int alto, int ancho);
};

