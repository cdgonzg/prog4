#include "Estadias.h"

Estadias :: Estadias(){
    for(int i=0; i<TAMANIO; i++){
        mapeo[i].existe = false;
    }
}

bool Estadias::member(int id) {
    int index = id % TAMANIO;
    return mapeo[index].existe && mapeo[index].info.getNumero() == id;
}

void Estadias::insert(Estadia estadia) {
    int index = estadia.getNumero() % TAMANIO;
    mapeo[index].existe = true;
    mapeo[index].info = estadia;
}

Estadia Estadias::find(int id) {
    int index = id % TAMANIO;
    if (mapeo[index].existe && mapeo[index].info.getNumero() == id) {
        return mapeo[index].info;
    }
}

void Estadias::remove(int id) {
    int index = id % TAMANIO;
    if (mapeo[index].existe && mapeo[index].info.getNumero() == id) {
        mapeo[index].existe = false;
    }
}

int Estadias::cantidadDias(int id) {
    int index = id % TAMANIO;
    if (mapeo[index].existe && mapeo[index].info.getNumero() == id) {
        return mapeo[index].info.cantidadDias();
    }
}

int Estadias::cantidadEstadias(int dias) {
    int cantidad = 0;
    for (int i = 0; i < TAMANIO; i++) {
        if (mapeo[i].existe) {
            if (mapeo[i].info.cantidadDias() == dias) {
                cantidad++;
            }
        }
    }
    return cantidad;
}

Iterador Estadias::listarPorRango(Fecha fechaInicio, Fecha fechaFin) {
    Iterador iterador;
    for (int i = 0; i < TAMANIO; i++) {
        if (mapeo[i].existe) {
            Fecha fechaIngreso = mapeo[i].info.getFechaIngreso();
            Fecha fechaSalida = mapeo[i].info.getFechaSalida();
            if ((fechaInicio.operator<(fechaIngreso) || fechaInicio.operator==(fechaIngreso)) && ((fechaSalida.operator<(fechaFin) || fechaSalida.operator==(fechaFin)))) {
                iterador.agregar(mapeo[i].info);
            }
        }
    }
    return iterador;
}