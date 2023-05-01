#pragma once
#include "Matrix.h"
#include <cmath>

mat3 translate(float Tx, float Ty) {
	mat3* res = new mat3(1.f);
	(*res)[0][2] = Tx;
	(*res)[1][2] = Ty;
	return *res;
}

mat3 scale(float Sx, float Sy) {
	mat3* res = new mat3(1.f);
	(*res)[0][0] = Sx;
	(*res)[1][1] = Sy;
	return *res;
}

mat3 scale(float S) {
	return scale(S, S);
}

mat3 rotate(float t) {
	mat3* res = new mat3(1.f);
	(*res)[0][0] = (float)cos(t);
	(*res)[1][1] = (*res)[0][0];
	(*res)[0][1] = (float)sin(t);
	(*res)[1][0] = -(*res)[0][1];
	return *res;
}

mat3 mirrorX() {
	mat3* res = new mat3(1.f);
	(*res)[0][0] = -1;
	return *res;
}

mat3 mirrorY() {
	mat3* res = new mat3(1.f);
	(*res)[1][1] = -1;
	return *res;
}