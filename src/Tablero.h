#ifndef TABLERO
#define TABLERO

#include "Celula.h"
#include <vector>
#include <string>
#include <fstream>
class Tablero
{
private:
	int alto= 0;
	int ancho= 0;
	unsigned long int edad = 0;
	Celula*** tablero = nullptr;

public:
	unsigned long int getEdad();
	Celula* getCelula(int fila, int columna);
	int* getDimensiones();
	Tablero(std::string rutaArchivo);
};


#endif // !TABLERO
