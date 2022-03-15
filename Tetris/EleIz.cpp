#include "EleIz.h"

EleIz::EleIz(int vel):Piezas(vel) {
	matrix[1][2] = 2;
	matrix[2][2] = 2;
	matrix[3][2] = 2;
	matrix[2][3] = 2;
}

