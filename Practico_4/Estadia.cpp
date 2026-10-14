#include "Estadia.h"

Estadia::Estadia(){
    numero = 0;
    fechaIngreso = Fecha();
    fechaSalida = Fecha();
}

Estadia::Estadia(int num, Fecha ing, Fecha sal){
    numero = num;
    fechaIngreso = ing;
    fechaSalida = sal;
}

Estadia::Estadia(Fecha ing, Fecha sal){
    fechaIngreso = ing;
    fechaSalida = sal;
}

Estadia::Estadia(const Estadia &estadia){
    numero = estadia.numero;
    fechaIngreso = estadia.fechaIngreso;
    fechaSalida = estadia.fechaSalida;
}
    
int Estadia::getNumero(){
    return numero;
}
Fecha Estadia::getFechaIngreso(){
    return fechaIngreso;
}
Fecha Estadia::getFechaSalida(){
    return fechaSalida;
}

void Estadia::setNumero(int num){
    numero = num;
}
void Estadia::setIngreso(Fecha ing){
    fechaIngreso = ing;
}
void Estadia::setSalida(Fecha sal){
    fechaSalida = sal;
}

int Estadia::cantidadDias() {
    return(fechaSalida - fechaIngreso);
}
