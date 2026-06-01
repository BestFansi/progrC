#include <stdio.h>

int main() {
    //1
    double matrix_1[3][3];
    int i, j, n;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("(%d, %d) = ", i + 1, j + 1);
            scanf("%d", &n);
            matrix_1[i][j] = n;
        }
    }

    printf("\nmatrix 3*3: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            n = matrix_1[i][j];
            printf("%d\t", n);
        }
        printf("\n");
    }

    double main_diag = 0;
    double co_diag = 0;

    for (i = 0; i < 3; i++){
        main_diag += matrix_1[i][i]; 
    }

    for (i = 0; i < 3; i++){
        co_diag += matrix_1[i][2-i]; 
    }

    printf("The sum of the main diagonal is %.2lf\n", main_diag);
    printf("The sum of the co-diagonal is %.2lf\n", co_diag);

    //2
    int mat_2[2][2];
    int mat_res[2][2];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("(%d, %d) = ", i + 1, j + 1);
            scanf("%d", &n);
            mat_2[i][j] = n;
        }
    }

    printf("\nmatrix 2*2: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            n = mat_2[i][j];
            printf("%d\t", n);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            mat_res[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                mat_res[i][j] += mat_2[i][k] * mat_2 [k][j];
            }
        }
    }

    printf("\nmatrix_pow: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            n = mat_res[i][j];
            printf("%d\t", n);
        }
        printf("\n");
    }

    return 0;
}