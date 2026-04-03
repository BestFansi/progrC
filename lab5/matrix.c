#include"matrix.h"
double plus(int n, double A[n][n], double B[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double C[i][j] = A[i][j] + B[i][j];
		}
	}
	return C;
}
double minus(int n, double A[n][n], double B[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double C[i][j] = A[i][j] - B[i][j];
		}
	}
	return C;
}
double time(int n, double A[n][n], double B[n][n]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return C;
}