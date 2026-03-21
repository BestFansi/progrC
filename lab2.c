#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//1
	int M=3;
	double matrix[M][M]; 
	double m,n;
	int i,j,k; 
	/*for (i = 0; i < 3; i++) { 
    	for (j = 0; j < 3; j++) {
    		scanf("%lf", &matrix[i][j]);
    	}
    }
    for (i = 0; i < 3; i++) {
		m += matrix[i][i];
    	n += matrix[i][2-i];
	}	
	printf("main diagonary= %lf\n", m);
	printf("secondary diagonary = %lf\n", n);
	
	//2
	int N=2;
	int A[N][N];
	int B[N][N];
	for (i = 0; i < 2; i++) { 
    	for (j = 0; j < 2; j++) {
    		B[i][j]=0;
    	}
	}
	for (i = 0; i < 2; i++) { 
    	for (j = 0; j < 2; j++) {
    		scanf("%d", &A[i][j]);
    	}
	}

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
            	B[i][j] += A[i][k] * A[k][j];
			}
        }
    }
    
	for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
	return 0;
}
