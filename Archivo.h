#ifndef ARCHIVO
#define ARCHIVO

#include <string>
#include <vector>
#include <fstream>
class Archivo
{
private:
	std::string ruta;
	std::fstream archivo;
	std::vector<std::vector<std::string>*> archivoCargado;
	unsigned int numeroLinea = 0;
public:
	/*
	post: devuelve la ruta del archivo
	*/
	std::string getRuta();
	/*
	post: devuelve un puntero a la siguiente linea del archivo
	*/
	std::vector<std::string>* getLinea();
	/*
	pre: la ruta es valida
	post: archivoCargado es un vector con punteros a cada linea del archivo
	*/
	Archivo(std::string ruta);
};

#endif