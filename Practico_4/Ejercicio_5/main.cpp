#include <iostream>
#include "MiClase.h"
using namespace std;

int main()
{
	MiClase m1;
	MiClase m2(10);
	MiClase m3(m2);
	MiClase m4;

	cout << "\nAntes de invocar a metodo1 m3.dato vale " << m3.getDato() << '\n';
	m2.metodo1(m3);
	cout << "Despues de invocar a metodo1 m3.dato vale " << m3.getDato() << '\n';
	cout << '\n';

	cout << "\nAntes de invocar a metodo2 m3.dato vale " << m3.getDato() << '\n';
	m2.metodo2(m3);
	cout << "Despues de invocar a metodo2 m3.dato vale " << m3.getDato() << '\n';
	cout << '\n';

	cout << "\nAntes de invocar a metodo3" << '\n';
	m4 = m1.metodo3();
	cout << "\nDespues de invocar a metodo3 m4.dato vale " << m4.getDato() << '\n';
	cout << '\n';

    return 0;
}
