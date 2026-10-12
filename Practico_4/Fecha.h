#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;

    void diaSiguiente();

public:
    Fecha();
    Fecha(int, int, int);
    Fecha(const Fecha&);

    int getDia() const;
    int getMes() const;
    int getAnio() const;

    bool operator==(const Fecha&) const;
    bool operator<(const Fecha&) const;
    Fecha& operator++();
    Fecha operator+(int dias) const;
    int operator-(const Fecha&) const;
    bool esValida() const;
};

#endif