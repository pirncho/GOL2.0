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
	std::vector<std::string>* linea = nullptr;
	do
	{
		linea = archivo.getLinea();
		int x = 0, y = 0; // variables que van a guardar la posicion de la celula
		Celula* celula = nullptr; // variable temporal que va a guardar una celula mientras la creo
		/*
		* la linea que empieza con "tablero" es la primera, que indica el tamaño
		*/
		if ((*linea)[0] == "tablero") {
			this->alto = std::stoi((*linea)[1]);
			this->ancho = std::stoi((*linea)[2]);
			this->tablero = new Celula**[alto];
			for (int i = 0; i < alto; i++) {
				this->tablero[i] = new Celula * [ancho];
			}
		}
		/*
		* la linea que empieza con "celula" indica la descripcion de una nueva celula
		*/
		if ((*linea)[0] == "celula") {
			celula = new Celula;
		}
		/*
		* la linea que empieza con "gen" indica un gen para agregar a la celulas
		*/
		if ((*linea)[0] == "gen") {
			InformacionGenetica bits((*linea)[1]);
			InformacionYCarga* info = new InformacionYCarga(bits ,std::stoi((*linea)[2]));
			celula->agregarGen(info);
		}
		/*
		* la linea que dice "fin" indica el fin de la descripicion de una celula
		*/
		if ((*linea)[0] == "fin") {
			tablero[y][x] = celula;
		}

		} while (linea);
}

Tablero::Tablero()
{
	this->alto = 0;
	this->ancho = 0;
	this->edad = 0;
	this->tablero = nullptr;
}
