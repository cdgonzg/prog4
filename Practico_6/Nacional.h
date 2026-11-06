#ifndef NACIONAL_H
#define NACIONAL_H
#include "Articulo.h"
#include "../Practico_5/String.h"

class Nacional : public Articulo {
    private:
        String departamento;
        bool subsidiado;

    public:
        Nacional(int, String, float, String, bool);
        String getDepartamento();
        bool getSubsidiado();
        void setSubsidiado(bool);
        float precioVenta();
        String tipoArticulo();
        ~Nacional();

};

#endif
