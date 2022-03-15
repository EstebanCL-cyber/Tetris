#include<iostream>
#include <conio2.h>
#include "Juego.h"

#include <ctime>
using namespace std;

int main (int argc, char *argv[]) {
	srand(time(NULL));

	Juego J;
	J.Play();
	
	return 0;
}

