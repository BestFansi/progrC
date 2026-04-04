#include <stdio.h>
#include <stdlib.h>
/*
Объявить массив данных типа double размером 3 на 3.
Ввести с консоли его значения,
вывести на консоль сумму его элементов, расположенных на главной диагонали и сумму элементов, расположенных на побочной диагонали.
Объявить массив данных типа int размером 2 на 2.
Ввести с консоли его значе-ния,
вывести на консоль квадрат данной матрицы
*/
//#define M 3
int main(int argc, char *argv[]) {
	//1
	int M = 4, i, j, k;
	double m1[M][M]; 
	double MainDiag = 0.0, SecDiag = 0.0;
	printf("Enter the value of matrix_1\n");
	for (i = 0; i < M; i++) { 
    	for (j = 0; j < M; j++) {
			printf("Enter m1[%d][%d]", i+1, j+1);
    		scanf("%lf", &m1[i][j]);
    	}
    }

	printf("matrix_1:\n");
	for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%.2lf\t", m1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < M; i++) {
		MainDiag += m1[i][i];
    	SecDiag += m1[i][M-1-i];
	}	
	printf("main diagonary= %lf\n", MainDiag);
	printf("secondary diagonary = %lf\n", SecDiag);
	
	//2
	int N = 2;
	int A[N][N], B[N][N];
	printf("Enter the value of matrix_2\n");
	for (i = 0; i < N; i++) { 
    	for (j = 0; j < N; j++) {
			printf("Enter m2[%d][%d]", i+1, j+1);
    		scanf("%d", &A[i][j]);
    	}
	}

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
			B[i][j]=0;
            for (k = 0; k < 2; k++) {
            	B[i][j] += A[i][k] * A[k][j];
			}
        }
    }

    printf("matrix_2:\n");
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

	return 0;
}
