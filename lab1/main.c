#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Объявить вещественные переменные a, b и с и задать их значения.
Предполагая, что a, b, c есть коэффициенты квадратного уравнения вывести на консоль значения их кор-ней х1, х2.
Следует подобрать такие значения коэффициентов, при которых корни бу-дут существовать.
*/

int main(int argc, char *argv[]) {
	double a, b, c, D, x_1, x_2;
	char d;
	do{
		printf("a = ");
		scanf("%lf", &a);
		printf("b = ");
		scanf("%lf", &b);
		printf("c = ");
		scanf("%lf", &c);
		
		D = pow(b, 2) - 4 * a * c;

		if (D>  0) {
			x_1=(-b+sqrt(D))/(2*a);
			x_2=(-b-sqrt(D))/(2*a);
			printf("x1 = %lf, x2 = %lf\n", x_1, x_2);
		}
		else if (D == 0) {
			x_1=(-b+sqrt(D))/(2*a);
			printf("x1 = x2 = %lf\n", x_1);
		}
		else if (D < 0){
			printf("D = %lf, no roots\n", D);
		}
		printf("Do it again? yes - y, no - other key\n");
		scanf(" %c", &d);
	}
	while (d == 'y');

	return 0;
}