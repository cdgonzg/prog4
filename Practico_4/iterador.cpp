#include "iterador.h"

Iterador(){
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
