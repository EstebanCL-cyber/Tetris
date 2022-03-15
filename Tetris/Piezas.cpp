#include "Piezas.h"
#include <string>
#include <iostream>
#include <conio2.h>

#include <cstdlib>
using namespace std;

Piezas::Piezas(int vel){
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad; //cada cuanto se permite mover la pelotita 16 veces por segundo
	tempo=clock(); //inicializamos tempo con el reloj
	
	x = 11;
	y = 5;
	ancho = 4;
	alto = 4;
	color=getColor();
	/*color = (rand()%15)+1;*/
	for(int i=0;i<ancho;i++){
		for(int j=0;j<alto;j++){
			matrix[i][j]=0;
		}
	}	
}


int Piezas::setLimit(){}

char Piezas::getForma(){
	return nombre;
}

void Piezas::printFigura(){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if (matrix[i][j]==0){
				textcolor(BLACK);
			}else{
				textcolor(color);
			}
			putchxy(x+i,y+j,2); 
		}
		cout << endl;
	}
}

void Piezas::movement(){

		if(kbhit()) { 
			int tecla=getch();
			
			switch(tecla)
			{
				
			case 75: //izquierda
				if(x>10){
					borrar(); 
					x--;
					dibujar();
				}
				
				break;
			case 77: //derecha
				if(x<17){
					borrar(); 
					x++;
					dibujar(); 
				}
				
				break;
			}
		}
}

int Piezas::getLimit(){}

int Piezas::getFigura(){}

char Piezas::getColor(){
	int p=rand()%5;
	switch(p){
	case 1:
		return RED;
		break;
	case 2:
		return GREEN;
		break;
	case 3:
		return YELLOW;
		break;
	case 4:
		return CYAN;
		break;
	case 5:
		return WHITE;
		break;
	}
}

void Piezas::setFigura(int){

	for(int i=0;i<ancho;i++){
		for(int j=0;j<alto;j++){
			matrix[i][j]=0;
		}
	}	
}

void Piezas::borrar(){
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			/*textcolor(getColor());	*/
			putchxy(x+i,y+k,0); 
		}
		cout<<endl;
	}
}

void Piezas::dibujar(){
	/*textcolor(getColor());*/

	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			gotoxy(x+i,y+k); 
			printFigura();
		}
	}
}

bool Piezas::update(){
	
	// mientras no llegue 70
	if (y<20){
		
		if(tempo+paso<clock()){
			
			borrar();
			y++;
			dibujar();
			
			tempo=clock(); // tomamos el tiempo para saber la proxima vez que movemos la pelotita
		}
		return true;
	}
	else{
		
		return false;
	};
	
}
