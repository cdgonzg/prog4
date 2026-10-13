#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia, mes, anio;
    void diaSiguiente();

public:
    Fecha();
    Fecha(int, int, int);
    Fecha(const Fecha &);

    int getDia();
    int getMes();
    int getAnio();

    bool operator==(Fecha);
    bool operator<(Fecha);
    Fecha operator++();
    Fecha operator+(int dias);
    int operator-(Fecha);
    bool esValida();
};

#endif