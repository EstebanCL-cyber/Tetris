#include "EseDe.h"

EseDe::EseDe(int vel):Piezas(vel) {
	matrix[2][2] = 2;
	matrix[2][3] = 2;
	matrix[3][1] = 2;
	matrix[3][2] = 2;
}

