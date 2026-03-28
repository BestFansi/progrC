#include "tri.h"
#include <math.h>
#include <stdbool.h>
bool check(double a, double b, double c) {
	return a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0;
}
double perimeter(double a, double b, double c) {
	return a + b + c;
}
double area(double a, double b, double c) {
	double p = perimeter(a, b, c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}