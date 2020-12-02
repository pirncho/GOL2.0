#ifndef TABLERO
#define TABLERO

#include "Celula.h"
#include <vector>
#include <string>
#include <fstream>
class Tablero
{
private:
	int alto;
	int ancho;
	unsigned long int edad = 0;
	Celula*** tablero;

public:
	unsigned long int getEdad();
	Celula* getCelula(int fila, int columna);
	int* getDimensiones();
	Tablero(std::string rutaArchivo);
};

#endif // !TABLERO
