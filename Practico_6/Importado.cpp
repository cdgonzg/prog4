#include "Importado.h"

Importado::Importado (int cod, String name, float precio, Fecha fecha, float imp): Articulo(cod, name, precio), fechaImportacion(fecha){
    fechaImportacion = fecha; //Esto es necesario?
    impuesto = imp;
}

Fecha Importado::getFechaImportacion(){
    return fechaImportacion;
}

float Importado::getImpuesto(){
    return impuesto;
}

void Importado::setImpuesto(float imp){
    impuesto = imp;
}

float Importado::precioVenta(){
    float precioFinal;
    Fecha f(31, 12, 2008);
    if (fechaImportacion < f){
         precioFinal = getPrecioCosto() * 2;
    } else {
         precioFinal = getPrecioCosto() * 1.8;
    }
    return precioFinal;
}

String Importado::tipoArticulo(){
    return "Importado";
}

Importado::~Importado(){
    
}