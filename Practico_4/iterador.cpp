#include "iterador.h"

Iterador(){
    tope = 0;
    actual = 0;
}

void agregar(Estadia){
    if(tope < TAMANIO){
        iter[tope] = estadia;
        tope++;
    }
}
bool hayMasEstadias(){
    return actual < tope;
}
Estadia ProximaEstadia(){
    if(hayMasEstadias()){
        return iter[actual++];
    }
}
