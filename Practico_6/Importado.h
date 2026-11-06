#ifndef IMPORTADO_H
#define IMPORTADO_H

class Importado {
    private:
        Fecha fechaImportacion;
        float impuesto;

    public:
        Importado (int, String, float, Fecha, float)
        Fecha getFechaImportacion();
        float getImpuesto();
        void setImpuesto(float);
        float precioVenta();
        String tipoArticulo();
        ~Importado()
    };

#endif