#include <stdio.h>
#include <stdlib.h>

double** create_mat(int n) {
    double** arr = (double**)malloc(sizeof(double*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (double*)malloc(sizeof(double) * n); 
    }
    return arr;
}

double** fu_zhi(double** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
    return arr;
}

double** cheng(double** arr1, double** arr2, int n) {
    double** res = create_mat(n);
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    return res;
}

void dayin(double** arr, int n){
    for(int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("%.2lf\t", arr[i][j]);
        }
    }
}
void clear(double** arr, int n){
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    int n = 3;
    double** mat1 = create_mat(n);
    double** mat2 = create_mat(n);
    printf("1\n");
    mat1 = fu_zhi(mat1, n);
    printf("2\n");
    mat2 = fu_zhi(mat2, n);
    double** res = cheng(mat1, mat2, n);
    dayin(res, n);
    clear(mat1, n);
    clear(mat2, n);
    clear(res, n);
}