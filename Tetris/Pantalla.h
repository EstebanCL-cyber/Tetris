#ifndef PANTALLA_H
#define PANTALLA_H
#include "Piezas.h"

class Pantalla{
private:
	int mapa[20][12];
//	int positionsx[20][12];
//	int positionsy[20][12];
	int altura=20;
	int ancho=12;
	Piezas *p1 = new Piezas(3);
	int *pieza[7];
public:
	Pantalla();
	void imprPantalla(int,int);
	void impUI();
	void movement();
	void dibujar();
	void setFigura();
	bool update(int,int);
	void agregarPieza(Piezas *,int,int);
	
};

#endif
