#ifndef MASCOTA_H
#define MASCOTA_H
#include "String.h"


class Mascota{
    private:
        int numero;
        String apodo;
        float peso ;
    public:
        Mascota(); // Constructor por defecto
        Mascota(int, String, float); // Constructor comun
        Mascota(const Mascota &);    //constructor de copia
        ~Mascota();

        int getNumero(); // Selector Numero
        String getApodo(); // Selector Apodo
        float getPeso();   //selector Peso
    };





#endif