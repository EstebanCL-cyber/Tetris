#ifndef JUEGO_H
#define JUEGO_H
#include "Piezas.h"

class Juego{
private:
	int aux=3;
public:
	Juego();
	void Play();
	Piezas *pieza1 = new Piezas(3);
	void checkPuntaje();
	Piezas* generarPieza();
};

#endif
