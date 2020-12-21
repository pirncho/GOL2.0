#include "Tablero.h"

unsigned long int Tablero::getEdad()
{
	return this->edad;
}

Celula* Tablero::getCelula(int fila, int columna)
{
	return (tablero)[fila][columna];
}

unsigned int* Tablero::getDimensiones()
{
	unsigned int* dim  = new unsigned int[2]{ alto,ancho };	
	return dim ;
}


Tablero::Tablero(std::string rutaArchivo)
{
	this->edad = 0;
	this->alto = 0;
	this->ancho = 0;
	this->tablero = nullptr;
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
			for (unsigned int i = 0; i < alto; i++) {
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

std::vector<Celula*>* Tablero::contarAlrededor(unsigned int y, unsigned int x) {
	std::vector<Celula*>* vec = new std::vector<Celula*>{};

	unsigned int vertical[3] = { (y - 1) % this->alto  , y , (y + 1) % this->alto };
	unsigned int horizontal[3] = { (x - 1) % this->ancho , x , (x + 1) % this->ancho };

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			if (not(j == 1 && i == 1))
			{
				if (tablero[j][i]->getViva()) {
					vec->push_back(tablero[j][i]);
				}
			}
		}
	}
	return vec;
}
void Tablero::ejecutarTurno()
{
	Celula*** proximo = new Celula**[alto];
	for (unsigned int i = 0; i < alto; i++)
	{
		proximo[i] = new Celula* [ancho];
	}

	for (unsigned int j = 0; j < alto; j++)
	{
		for (unsigned int i = 0; i < ancho; i++)
		{
			std::vector<Celula*>* alrededor = contarAlrededor(j, i);
			if (alrededor->size() == 3 && not tablero[j][i]->getViva()) // nace una nueva celula con los padres que figuran en el vector
			{
				proximo[j][i] = new Celula((*alrededor)[0],(*alrededor)[1],(*alrededor)[2]);
				delete tablero[j][i];
			}
			if (alrededor->size() == 1 || alrededor->size() > 4) //muere por sobrepoblacion o despoblacion :C
			{
				proximo[j][i] = new Celula();
				delete tablero[j][i];
			}
			if (alrededor->size() == 2 || (alrededor->size() == 3 && tablero[j][i]->getViva() )) //todo sigue igual
			{
				proximo[j][i] = tablero[j][i];
			}

			delete alrededor;
		}
	}

	for (unsigned int j = 0; j < alto; j++)
	{
		delete[] tablero[j];
	}
	delete[] tablero;
	tablero = proximo;
}

Tablero::~Tablero()
{
	for (unsigned int  j= 0; j < alto; j++)
	{
		for (unsigned int i = 0; i < ancho; i++)
		{
			delete tablero[j][i];
		}
	}
}
