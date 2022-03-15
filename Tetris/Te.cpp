#include "Piezas.h"
#include "Te.h"
#include <iostream>
#include <conio2.h>
using namespace std;

Te::Te(int vel):Piezas(vel) {
	matrix[2][1] = 2;
	matrix[3][0] = 2;
	matrix[3][1] = 2;
	matrix[3][2] = 2;
}

int Te::setLimit(){}




