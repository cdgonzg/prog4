#ifndef ITERADOR_H
#define ITERADOR_H
#include "Estadia.h"

class Iterador {

    private:
        static constexpr int TAMANIO = 100;  
        Estadia iter [TAMANIO]; 
        int tope;
        int actual;
        
    public:
        Iterador();
        void agregar(Estadia);
        bool hayMasEstadias();
        Estadia ProximaEstadia();
};

#endif