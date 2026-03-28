#define _CRT_SECURE_NO_WARNINGS 1
#include "tri.h"
#include<stdio.h>

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);

	if (check(a, b, c)) {
		printf("not a triangle");
		return 0;
	}
	double per = perimeter(a, b, c);
	double ar = area(a, b, c);

	printf("perimeter = %.2lf\n", per);
	printf("area = %.2lf\n", ar);

	return 0;
}