#include "Juego.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <conio2.h>
#include <windows.h>
#include "Te.h"
#include "Cuadrado.h"
#include "EseIz.h"
#include "EseDe.h"
#include "EleIz.h"
#include "EleDe.h"
#include "Linea.h"
#include "Pantalla.h"
using namespace std;

Juego::Juego(){}

void Juego::Play(){
	Pantalla J1;
	J1.imprPantalla(10,5);
	J1.impUI();
	while(true){
		Pantalla J1;
		J1.imprPantalla(10,5);
		J1.impUI();
		bool flag = true;
		pieza1 = generarPieza();
		while(flag) {
			pieza1->movement();
			flag = pieza1->update();
		}
	};
	
}

void Juego::checkPuntaje(){}

Piezas* Juego::generarPieza(){
	int p = rand()%7;
	if (p==0) return new Te(aux);
	if (p==1) return new Cuadrado(aux);
	if (p==2) return new EseIz(aux);
	if (p==3) return new EseDe(aux);
	if (p==4) return new EleIz(aux);
	if (p==5) return new EleDe(aux);
	if (p==6) return new Linea(aux);
}
