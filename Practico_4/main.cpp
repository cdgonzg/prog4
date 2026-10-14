#include "Fecha.h"
#include "Estadia.h"
#include <iostream>

int main() {
    Fecha f1(1, 1, 2020);
    Fecha f2(1, 1, 2021);

    int diferencia = f2 - f1;
    std::cout << "La diferencia es: " << diferencia << " días" << std::endl;

    if (f1 < f2) {
        std::cout << "f1 es menor que f2" << std::endl;
    } else {
        std::cout << "f1 no es menor que f2" << std::endl;
    }

    if (f1 == f2) {
        std::cout << "f1 es igual a f2" << std::endl;
    } else {
        std::cout << "f1 no es igual a f2" << std::endl;
    }

    if (f1.esValida()) {
        std::cout << "f1 es una fecha válida" << std::endl;
    } else {
        std::cout << "f1 no es una fecha válida" << std::endl;
    }

    int diasASumar = 10;
    f1 = f1 + diasASumar;
    std::cout << "f1 después de sumar " << diasASumar << " días: "
              << f1.getDia() << "/" << f1.getMes() << "/" << f1.getAnio() << std::endl;

    Estadia estadia1(0, f1, f2);
    std::cout << "Número de la estadía: " << estadia1.getNumero() << std::endl;
    std::cout << "Número de días de la estadía: " << estadia1.cantidadDias() << std::endl;
    estadia1.setNumero(123);
    std::cout << "Número de la estadía después de setearlo: " << estadia1.getNumero() << std::endl;

    return 0;
}
