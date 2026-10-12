#include "Fecha.h"

class Fecha {
    private:
        int dia;
        int mes;
        int anio;
        
        void Fecha::diaSiguiente() {
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                if (dia == 30) {
                    dia = 1;
                    mes++;
                    return;
                }
            } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                if (dia == 31) {
                    dia = 1;
                    if (mes == 12) {
                        mes = 1;
                        anio++;
                    } else {
                        mes++;
                    }
                    return;
                }
            } else if (mes == 2) {
                if (esBisiesto(anio)) {
                    if (dia == 29) {
                        dia = 1;
                        mes = 3;
                        return;
                    }
                } else {
                    if (dia == 28) {
                        dia = 1;
                        mes = 3;
                        return;
                    }
                }
            }

            dia++;
        }
        
        bool esBisiesto(int anio) {
            return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
        }

    public:
        Fecha::Fecha() {
            dia = 1;
            mes = 1;
            anio = 2000;
        }

        Fecha::Fecha(int d, int m, int a) {
            dia = d;
            mes = m;
            anio = a;
        }

        Fecha::Fecha(const Fecha& otra) {
            dia = otra.dia;
            mes = otra.mes;
            anio = otra.anio
        }

        int Fecha::getDia() { 
            return dia; 
        }

        int Fecha::getMes() { 
            return mes; 
        }

        int Fecha::getAnio() { 
            return anio; 
        }

        

        bool Fecha::operator==(Fecha otra) {
            return dia == otra.dia && mes == otra.mes && anio == otra.anio;
        }

        bool Fecha::operator<(Fecha otra) const {
            if (anio != otra.anio) return anio < otra.anio;
            if (mes != otra.mes) return mes < otra.mes;
            return dia < otra.dia;
        }

        Fecha Fecha::operator++() {
            diaSiguiente();
        }

        Fecha Fecha::operator+(int dias) {
            Fecha temp = *this;
            for (int i = 0; i < dias; ++i) {
                temp.diaSiguiente();
            }
            return temp;
        }

        int Fecha::operator-(Fecha otra) const {
            int diferencia = 0;

            Fecha temp = *this;
            if (*this < otra) {
                while (temp < otra) {
                    temp.diaSiguiente();
                    diferencia++;
                }
            } else {
                while (otra < temp) {
                    otra.diaSiguiente();
                    diferencia++;
                }
            }

            return diferencia;
        }

        bool Fecha::esValida() const {
            if (mes < 1 || mes > 12) return false;
            if (dia < 1 || dia > 31) return false;

            if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
                return false;
            }

            if (mes == 2) {
                if (esBisiesto(anio) && dia > 29) return false;
                if (!esBisiesto(anio) && dia > 28) return false;
            }

            return true;
        }
}