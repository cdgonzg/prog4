#include "Fecha.h"
#include "Estadia.h"
#include "iterador.h"
#include <iostream>

int main() {
    Fecha f1(1, 1, 2020);
    Fecha f2(1, 1, 2021);

    Fecha f3 = f1 + 30; // Sumar 30 días a f1
    Fecha f4 = ++f1; // Incrementar f1 en un día

    
    Estadia estadia1(0, f1, f2);
    std::cout << "Número de la estadía: " << estadia1.getNumero() << std::endl;
    Estadia estadia2(1, f3, f4);
    std::cout << "Número de la estadía: " << estadia2.getNumero() << std::endl;
    Iterador iter;
    iter.agregar(estadia1);
    iter.agregar(estadia2);
    while(iter.hayMasEstadias()){
        Estadia e = iter.ProximaEstadia();
        std::cout << "Número de la estadía: " << e.getNumero() << std::endl;
    }

    return 0;
}
