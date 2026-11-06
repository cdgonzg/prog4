#include "Importado.h"
#include "Nacional.h"
#include "../Practico_4/Fecha.h"
#include <iostream>

int main() {
    Fecha fechaImportacion(15, 3, 2022);
    Importado articuloImportado(1, "Articulo Importado", 100.0, fechaImportacion, 20.0);
    std::cout << "Tipo de articulo: "; articuloImportado.tipoArticulo().print(); std::cout << std::endl;
    std::cout << "Precio de venta: " << articuloImportado.precioVenta() << std::endl;
    std::cout << "Impuesto: " << articuloImportado.getImpuesto() << std::endl;
    articuloImportado.setImpuesto(25.0);
    std::cout << "Nuevo impuesto: " << articuloImportado.getImpuesto() << std::endl;
    std::cout << "Precio de venta con nuevo impuesto: " << articuloImportado.precioVenta() << std::endl;
    std::cout << "Precio de costo: " << articuloImportado.getPrecioCosto() << std::endl;
    std::cout << "Nombre del articulo: "; articuloImportado.getNombre().print(); std::cout << std::endl;
    std::cout << "Codigo del articulo: " << articuloImportado.getCodigo() << std::endl;
    std::cout << "Tipo de articulo: "; articuloImportado.tipoArticulo().print(); std::cout << std::endl;
    std::cout << "Impuesto actualizado: " << articuloImportado.getImpuesto() << std::endl;
    std::cout << "Precio de venta final: " << articuloImportado.precioVenta() << std::endl;
    std::cout << "Nombre del articulo final: "; articuloImportado.getNombre().print(); std::cout << std::endl;
    std::cout << "Codigo del articulo final: " << articuloImportado.getCodigo() << std::endl;
    std::cout << "Impuesto final: " << articuloImportado.getImpuesto() << std::endl;
    std::cout << "Precio de costo final: " << articuloImportado.getPrecioCosto() << std::endl;
    std::cout << "Tipo de articulo final: "; articuloImportado.tipoArticulo().print(); std::cout << std::endl;
    std::cout << "Todos los detalles del articulo final: " << std::endl;
    std::cout << "Codigo: " << articuloImportado.getCodigo() << std::endl;
    std::cout << "Nombre: "; articuloImportado.getNombre().print(); std::cout << std::endl;
    std::cout << "Precio de costo: " << articuloImportado.getPrecioCosto() << std::endl;
    std::cout << "Impuesto: " << articuloImportado.getImpuesto() << std::endl;
    std::cout << "Precio de venta: " << articuloImportado.precioVenta() << std::endl;
    std::cout << "Tipo de articulo: "; articuloImportado.tipoArticulo().print(); std::cout << std::endl;

    Nacional articuloNacional(2, "Articulo Nacional", 50.0, "Montevideo", false);
    std::cout << "Tipo de articulo: "; articuloNacional.tipoArticulo().print(); std::cout << std::endl;
    std::cout << "Precio de venta: " << articuloNacional.precioVenta() << std::endl;
    std::cout << "Precio de costo: " << articuloNacional.getPrecioCosto() << std::endl;
    std::cout << "Nombre del articulo: "; articuloNacional.getNombre().print(); std::cout << std::endl;
    std::cout << "Codigo del articulo: " << articuloNacional.getCodigo() << std::endl;
    std::cout << "Todos los detalles del articulo nacional: " << std::endl;
    std::cout << "Codigo: " << articuloNacional.getCodigo() << std::endl;
    std::cout << "Nombre: "; articuloNacional.getNombre().print(); std::cout << std::endl;
    std::cout << "Precio de costo: " << articuloNacional.getPrecioCosto() << std::endl;
    std::cout << "Precio de venta: " << articuloNacional.precioVenta() << std::endl;
    std::cout << "Tipo de articulo: "; articuloNacional.tipoArticulo().print(); std::cout << std::endl;
    std::cout << "Precio de venta final: " << articuloNacional.precioVenta() << std::endl;
    std::cout << "Nombre del articulo final: "; articuloNacional.getNombre().print(); std::cout << std::endl;
    std::cout << "Codigo del articulo final: " << articuloNacional.getCodigo() << std::endl;
    std::cout << "Precio de costo final: " << articuloNacional.getPrecioCosto() << std::endl;
    std::cout << "Tipo de articulo final: "; articuloNacional.tipoArticulo().print(); std::cout << std::endl;

    
    return 0;
}
