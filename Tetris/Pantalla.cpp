#include "Pantalla.h"
#include <conio2.h>
#include <iostream>
#include "Piezas.h"
#include <ctime>
using namespace std;

Pantalla::Pantalla(){

	for(int i=0;i<altura;i++){
		for(int j=0;j<ancho;j++){
			mapa[i][j]=0;
		}
	}
	for(int i=0; i<altura; i++){
		mapa[i][0]=1;
		mapa[i][ancho-1]=1;
	}
	for(int f=0; f<ancho-1; f++){
		mapa[altura-1][f]=1;
	}
}

void Pantalla::imprPantalla(int x, int y){
	for(int i=0;i<altura;i++){
		x=10;
		for(int j=0;j<ancho;j++){
//			positionsx[i][j]=x;
//			positionsy[i][j]=y;
			gotoxy(x,y);
			if(mapa[i][j]==1){
				textcolor(BLUE);
				cout << (char)219;
			}
			x++;
		}
		cout<<endl;
		y++;
	}
}

void Pantalla::impUI(){
	textcolor(YELLOW);
	gotoxy(25,5);
	cout << "Lineas: " << endl;
	gotoxy(25,6);
	cout << "Puntos: " << endl;
	gotoxy(25,7);
	cout << "Nivel: " << endl;
	gotoxy(25,8);
	cout << "Controles: " << endl;
	gotoxy(25,9);
	cout << "Q: Girar izquierda" << endl;
	gotoxy(25,10);
	cout << "W: Girar derecha";
	gotoxy(25,30);
}

void Pantalla::movement(){
	
	p1->movement();
}

void Pantalla::dibujar(){
	p1->dibujar();
}

void Pantalla::setFigura(){
	if (p1->update()==false){
		gotoxy(p1->x, p1->y);
		cout << (char)219;
	}
}

bool Pantalla::update(int x, int y){
	bool aux=p1->update();
	while(aux==true){
		if (mapa [x][y+1]==1){
			
		}
	}
}

void Pantalla::agregarPieza(Piezas *p, int x, int y){
//	int *pieza = p->getFigura();
//	mapa[pieza[0]+x][pieza[1]+y] = pieza;
	
}
