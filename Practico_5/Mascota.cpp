#include "Mascota.h"

Mascota::Mascota():apodo() // Constructor por defecto
{
    numero = 0;
    peso = 0.0;
}

Mascota::Mascota(int num, String apo, float pes): apodo(apo) // Constructor comun
{
    numero = num;
    peso = pes;
}

Mascota::Mascota(const Mascota & mas): apodo(mas.apodo)    //constructor de copia
{
    numero = mas.numero;
    peso = mas.peso;
}

Mascota::~Mascota()
{

}

int Mascota:: getNumero() // Selector Numero
{
    return numero;
}

String Mascota::getApodo() // Selector Apodo
{
    return apodo;
}

float Mascota::getPeso()   //selector Peso
{
    return peso;
}