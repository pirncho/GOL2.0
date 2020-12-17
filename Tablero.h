#ifndef TABLERO
#define TABLERO

#include "Celula.h"
#include "Archivo.h"
#include "globales.h"
#include <vector>
#include <string>
#include <fstream>
class Tablero
{
private:
	int fila= 0;
	int col= 0;
	int maxCelulas;
	unsigned long int edad = 0;
	Celula*** tablero = nullptr;

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
    pre: el archivo existe
    post: se crea el tablero segun las especificaciones del archivo
    */
    /*
     * de aparecerCelula aun no estoy seguro
     */
    void aparecerCelulas();
    void revivirMatar();
    void contarVecinas(int fila,int col,int vecinas);
    Tablero(std::string rutaArchivo);
};


#endif // !TABLERO
