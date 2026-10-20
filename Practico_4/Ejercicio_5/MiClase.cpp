#include <iostream>
#include "MiClase.h"
using namespace std;

MiClase :: MiClase ()
{
	dato = 0;
	cout << "Soy el constructor por defecto  ";
	cout << " Mi Dato es " << dato << '\n';
}

MiClase :: MiClase (int d)
{
	dato = d;
	cout << "Soy el constructor comun ";
	cout << " Mi dato es " << dato << '\n';
}

MiClase :: MiClase (const MiClase &m)
{
	dato = m.dato;
	cout << "Soy el constructor de copia ";
	cout << " Mi Dato es " << dato << '\n';
}

MiClase :: ~MiClase()
{
   cout << "Soy el destructor";
   cout << " Mi dato es " << dato << '\n';
}

int MiClase :: getDato()
{
	return dato;
}

void MiClase :: metodo1 (MiClase m)
{
    m.dato++;
	cout << "Este es el metodo 1 " << '\n';
	cout << '\t' << " El dato del objeto implicito es " << dato << '\n';
	cout << '\t' << " El dato del parametro es " << m.dato << '\n';
}

void MiClase :: metodo2 (MiClase &m)
{
    m.dato++;
	cout << " Este es el metodo 2 " << '\n';
	cout << '\t' << " El dato del objeto implicito es " << dato << '\n';
	cout << '\t' << " El dato del parametro es " << m.dato << '\n';
}

MiClase MiClase :: metodo3 (){
	MiClase local;
	local.dato = dato + 2;
	cout << "Este es el metodo 3 " << '\n';
	cout << '\t' << " El dato del objeto implicito es " << dato << '\n';
	cout << '\t' << " El dato del objeto a devolver es " << local.dato << '\n';
	return local;
}
