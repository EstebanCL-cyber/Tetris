#include "EleDe.h"

EleDe::EleDe(int vel):Piezas(vel) {
	matrix[1][1] = 2;
	matrix[2][1] = 2;
	matrix[3][0] = 2;
	matrix[3][1] = 2;
}

