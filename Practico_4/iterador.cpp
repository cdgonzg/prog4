#include "iterador.h"

Iterador :: Iterador(){
    tope = 0;
    actual = 0;
}

void Iterador :: agregar(Estadia estadia){
    if(tope < TAMANIO){
        iter[tope] = estadia;
        tope++;
    }
}

bool Iterador :: hayMasEstadias(){
    return actual < tope;
}

Estadia Iterador :: ProximaEstadia(){
    if(hayMasEstadias()){
        return iter[actual++];
    }
}
