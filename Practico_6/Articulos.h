#ifndef ARTICULOS_H
#define ARTICULOS_H
#include "Articulo.h"
#include "../Practico_4/Fecha.h"

const int cant = 50;

class Articulos {
    private:
        //mapeo de articulos
        typedef struct NodoL {
             Articulo * info;
             NodoL * sig;
        }NodoLis;

        NodoLis * Hash[cant];
        int h(int);
        void crearLista (NodoL * &);
        void destruirLista (NodoL * &);
        bool perteneceLista (NodoL *, int);
        void insFrontEnLista (NodoL * &, Articulo *);
        Articulo * obtenerEnLista (NodoL *, int);
        
    public:
        Articulos();
        ~Articulos();
        bool member(int);
        void insert(Articulo);
        Articulo find(int);
        void remove(int);
        bool estaVacio();
        bool estaLleno();
        Articulo articuloMasCaro();
        int cuantosNacionales(String);
        int cuantosImportados(Fecha);

};
#endif // ARTICULOS_H