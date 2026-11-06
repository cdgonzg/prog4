#include "Nacional.h"

Nacional(int cod, String name, float precio, String dpto, bool sub): Articulo(cod, name, precio), departamento(dpto);
{
    subsidiado = sub;
}

String getDepartamento(){
    return departamento;
}

bool getSubsidiado(){
    return subsidiado;
}

void setSubsidiado(bool sub){
    subsidiado = sub;
}

float precioVenta(){
    float precio = Articulo::precioVenta();
    if (!getSubsidiado){
        if (dpto=="Montevideo") {
            precio = precio * 1.15;
        } else {
            precio = precio * 1.20;
        }
    }
    return precio;
}

String tipoArticulo(){
    return ("Nacional");
}

~Nacional(){

}