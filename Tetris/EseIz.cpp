#include "EseIz.h"

EseIz::EseIz(int vel):Piezas(vel) {
	matrix[2][0] = 2;
	matrix[2][1] = 2;
	matrix[3][1] = 2;
	matrix[3][2] = 2;
}

