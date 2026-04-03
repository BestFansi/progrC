#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

int main() {
	double *dp；

	if (str == NULL) {
        printf("内存分配失败\n");

	int n;
	printf("n = ");
	scanf("%d", &n);
	double A[n][n], B[n][n];
	printf("matrix A");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lf", &A[i][j]);
		}
	}
	printf("matrix B")
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lf", &B[i][j]);
		}
	}
	double plu = plus(double A[n][n], double B[n][n]);
	printf("%lf", &plu)
	return 0;
}