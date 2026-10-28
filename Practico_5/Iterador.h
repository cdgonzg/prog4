#ifndef ITERADOR_H
#define ITERADOR_H
#include "Dueno.h"

class Iterador{
    private:  
        typedef struct Nodo {     
            Dueno * info;    //iterador de punteros a dueños 
            Nodo * sig;  
        } NodoI;  
        Nodo * prim;  
        Nodo * ulti;  
        Nodo * actual;
        
    public:
        Iterador(); // Constructor por defecto
        ~Iterador(); // Destructor

        void insertar(Dueno * d); // Insertar un nuevo dueño
        bool hayMasDueno();
        Dueno * proximoDueno();
};

#endif