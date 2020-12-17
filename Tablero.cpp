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
	int* dim  = new int[2]{ fila,col };
	return dim ;
}
void Tablero::aparecerCelulas() {
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < col; ++j) {
            getCelula(i,j)->matar();
        }
    }
}
void Tablero::contarVecinas(int fila, int col,int cercanas) {
    int vecinas=0;
    if (getCelula(fila-1,col-1)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila,col-1)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila+1,col-1)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila-1,col)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila+1,col)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila-1,col+1)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila,col+1)->getViva() == true){
        vecinas +=1;
    }
    if (getCelula(fila+1,col+1)->getViva() == true){
        vecinas +=1;
    }
    cercanas=vecinas;
}
void Tablero::revivirMatar() {
    int cercanas=0;
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < col; ++j) {
            if(getCelula(i,j)->getViva() == true){
                contarVecinas(i,j,cercanas);
                if (cercanas < 2 || cercanas >3){
                    getCelula(i,j)->matar();
                }
            }
            if (getCelula(i,j)->getViva() == false){
                contarVecinas(i,j,cercanas);
                if (cercanas == 3){
                    getCelula(i,j)->revivir();
                }
            }
        }
    }
}
Tablero::Tablero(std::string rutaArchivo)
{
	Archivo archivo(rutaArchivo);
	std::vector<std::string>* linea;
	do
	{
		linea = archivo.getLinea();
		if ((*linea)[0] == "Tablero") {
			this->fila = std::stoi((*linea)[1]);
			this->col = std::stoi((*linea)[2]);
		}
	} while (linea);
	maxCelulas=fila*col;
}
