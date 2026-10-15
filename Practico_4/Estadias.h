#ifndef ESTADIAS_H
#define ESTADIAS_H
#include "Estadia.h"
#include "iterador.h"

class Estadias {
    private:  
        static constexpr int TAMANIO = 100;
        struct Celda { bool existe; 
            Estadia info; 
        }; 
        Celda mapeo[TAMANIO];

    public:
        Estadias();
        bool member(int);
        void insert(Estadia);
        Estadia find(int);
        void remove(int);
        int cantidadDias(int);
        int cantidadEstadias(int);
        Iterador listarPorRango(Fecha fechaInicio, Fecha fechaFin);
};

#endif