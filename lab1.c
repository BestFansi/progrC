#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
	double a,b,c,D,x_1,x_2;
	
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	
	D=pow(b,2)-4*a*c;
	

	if (D>0){
		x_1=(-b+pow(D,0.5))/(2*a);
		x_2=(-b-pow(D,0.5))/(2*a);
		printf("x1 = %lf\n", x_1);
		printf("x2 = %lf\n", x_2);
	}
	else if (D==0){
		x_1=(-b+pow(D,0.5))/(2*a);
		printf("x1 = x2 = %lf\n", x_1);
	}
	else{
		printf("D < 0, no root");
	}
	
	return 0;
}
