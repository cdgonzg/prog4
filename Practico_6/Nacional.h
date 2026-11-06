#ifndef NACIONAL_H
#define NACIONAL_H
#include "String.h"

class Nacional {
    public:
        String departamento;
        bool subsidiado;

    private:
        Nacional(int, String, float, String, bool)
        String getDepartamento();
        bool getSubsidiado();
        void setSubsidiado(bool);
        float precioVenta();
        String tipoArticulo();
        ~Nacional();

};

#endif
