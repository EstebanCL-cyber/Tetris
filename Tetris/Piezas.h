#ifndef PIEZAS_H
#define PIEZAS_H
#include <ctime>
#include <string>
using namespace std;

class Piezas{
protected:
	int matrix[4][4];
	char nombre;	
	//----------------
	int posicionActual;
	char color;
	
	int ancho;
	int alto;
	int colorAleatorio;
	
	clock_t tempo; //variable para ajustar la velocidad de movimiento de la pelotita
	clock_t paso; //variable para ajustar la velocidad de movimiento de la pelotita
	int velocidad;
public:
	Piezas(int);
	int x;
	int y;
	char getForma();
	void printFigura();
	void movement();
	//---------------------------
	int getLimit();
	virtual int setLimit();
	int getFigura();
	char getColor();
	void setFigura(int);
	void borrar();
	void dibujar();
	bool update();
};

#endif
