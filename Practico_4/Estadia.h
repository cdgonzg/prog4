#ifndef ESTADIA_H
#define ESTADIA_H
#include "Fecha.h"

class Estadia {
private:
    int numero;
    Fecha fechaIngreso, fechaSalida;
    

public:
    Estadia();
    Estadia(int, Fecha, Fecha);
    Estadia(Fecha, Fecha);
    Estadia(const Estadia &);
    
    int getNumero();
    Fecha getFechaIngreso();
    Fecha getFechaSalida();
    void setNumero(int num);
    void setIngreso(Fecha ing);
    void setSalida(Fecha sal);

    int cantidadDias();

    // bool operator==(Fecha);
    // bool operator<(Fecha);
    // Fecha operator++();
    // Fecha operator+(int dias);
    // int operator-(Fecha);
    // bool esValida();
};

#endif