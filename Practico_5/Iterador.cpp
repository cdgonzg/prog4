#include "Iterador.h"

// Constructor por defecto
Iterador::Iterador(){
    prim = NULL;
    ulti = NULL;
    actual = NULL;
}

// Destructor
Iterador::~Iterador(){
    Nodo * aux = prim;
    while (aux != NULL) {
        prim = prim->sig;
        // Liberar memoria del dueño
        delete aux;
        aux = prim;
    }
}

// Insertar un nuevo dueño
void Iterador::insertar(Dueno * d){
    Nodo * nuevoNodo = new Nodo;
    nuevoNodo->info = d;
    nuevoNodo->sig = NULL;

    if (prim == NULL) {
        prim = nuevoNodo;
        ulti = nuevoNodo;
        actual = nuevoNodo;
    } else {
        ulti->sig = nuevoNodo;
        ulti = nuevoNodo;
    }
}

bool Iterador::hayMasDueno(){
    return actual != NULL;
}

// precondicion: hayMasDueno() == true
Dueno * Iterador::proximoDueno(){
    Dueno * resultado = actual->info;
    actual = actual->sig;

    return resultado;
}
