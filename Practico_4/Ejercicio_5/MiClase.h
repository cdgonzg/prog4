#ifndef __MiClase_h
#define __MiClase_h

class MiClase
{
  private:
	int dato;

  public:
	MiClase();
	MiClase(int);
	MiClase(const MiClase &);
	~MiClase();
	int getDato();
	void metodo1(MiClase);
	void metodo2(MiClase &);
	MiClase metodo3();
};

#endif
