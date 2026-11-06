#ifndef IMPORTADO_H
#define IMPORTADO_H
#include "Articulo.h"
#include "../Practico_5/String.h"
#include "../Practico_4/Fecha.h"

class Importado : public Articulo {
    private:
        Fecha fechaImportacion;
        float impuesto;

    public:
        Importado (int, String, float, Fecha, float);
        Fecha getFechaImportacion();
        float getImpuesto();
        void setImpuesto(float);
        float precioVenta();
        String tipoArticulo();
        ~Importado();
};

#endif