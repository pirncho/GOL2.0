#include "Archivo.h"

std::string Archivo::getRuta()
{
    return ruta;
}

std::vector<std::string>* Archivo::getLinea()
{
    if (archivoCargado.size() < numeroLinea) {
        return archivoCargado[this->numeroLinea++];
    }
    return nullptr;
    
}

Archivo::Archivo(std::string ruta)
{
    std::vector<std::string>* lineaSeparada;
    this->ruta = ruta;
    archivo.open(ruta, std::ios::in);
    std::string linea;
    char caracter = ' ';
    int palabra = 0;
    while (getline(archivo, linea))
    {
        lineaSeparada = new std::vector<std::string>;
        do
        {
            caracter = linea[0];
            linea.erase(0);
            if (caracter != ' ')
            {
                (*lineaSeparada)[palabra].push_back(caracter);
            }
            else
            {
                palabra++;
            }
        } while (linea.empty());
        palabra = 0;
        this->archivoCargado.push_back(lineaSeparada);
    }
    this->numeroLinea = 0;
}
