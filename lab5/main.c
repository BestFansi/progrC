#include <stdio.h>
#include <stdlib.h>
#include "op.h"
int main()
{
    //Dynamically allocate a two-dimensional array
    int n = 0;
    printf("n = ");
    scanf("%d", &n);
    double** mat1 = AllArr(n);
    double** mat2 = AllArr(n);

    //assign
    printf("matrix1 = ");
    mat1 = inp(mat1, n);
    printf("matrix2 = ");
    mat2 = inp(mat2, n);

    //operation
    char op;
    printf("operation: ");
    scanf(" %c", &op);
    double** result = calculate(mat1, mat2, n, op);

    //output
    outp(result, n);

    //clear
    FreeArr(result, n);
    FreeArr(mat1, n);
    FreeArr(mat2, n);
   
    return 0;
}