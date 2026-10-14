#ifndef ITERADOR_H
#define ITERADOR_H
#include "Estadia.h"

class Iterador {

    private:  
        Estadia iter [TAMANIO]; 
        int tope,actual;

    public:
        Iterador();
        void agregar(Estadia);
        bool hayMasEstadias();
        Estadia ProximaEstadia();
};

#endif