#ifndef ARTICULO_H
#define ARTICULO_H
#include "../Practico_5/String.h"

class Articulo {
    private:
        int codigo;
        String nombre;
        float precioCosto;

    public:
        Articulo (int, String, float);
        int getCodigo();
        String getNombre();
        float getPrecioCosto();
        void setPrecioCosto(float);
        virtual float precioVenta();
        virtual String tipoArticulo()=0;
        virtual ~Articulo();
};

#endif