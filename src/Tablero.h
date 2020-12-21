#ifndef TABLERO
#define TABLERO

#include "Celula.h"
#include "Archivo.h"
#include <vector>
#include <string>
#include <fstream>

class Tablero
{
private:
	int alto;
	int ancho;
	unsigned long int edad;
	Celula*** tablero;

public:
	/*
	post: devuelve la edad del juego actual
	*/
	unsigned long int getEdad();
	/*
	pre: es una posicion valida del tablero
	post: devuelve un puntero a la celula indicada
	*/
	Celula* getCelula(int fila, int columna);
	/*
	post: devuelve un array con el alto y ancho del tablero
	*/
	int* getDimensiones();
	/*
	pre: es una posicion valida en el tablero
	post: devuelve un vector de punteros a las celulas vivas alrededor de la celda indicada
	*/
	std::vector<Celula*>* contarAlrededor(unsigned int y, unsigned int x);
	/*
	pre: el archivo existe
	post: se crea el tablero segun las especificaciones del archivo
	*/
	Tablero(std::string rutaArchivo);
	/*
	post: crea un tablero vacio
	*/
	Tablero();
	/*
	post: ejecuta un turno
	*/
	void ejecutarTurno();
	/*
	post: se liberan todos los recursos asociados a la estructura
	*/
	~Tablero();
};


#endif // !TABLERO
