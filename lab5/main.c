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
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &mat1[i][j]);
        }
    }

    printf("matrix2 = ");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &mat2[i][j]);
        }
    }

    //operation
    char op;
    printf("operation: ");
    scanf(" %c", &op);
    double** result = calculate(mat1, mat2, n, op);

    //output
    printf("result: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

    //clear
    FreeArr(result, n);
    FreeArr(mat1, n);
    FreeArr(mat2, n);
   
    return 0;
}