#include <stdlib.h>
#include "op.h"

double** AllArr(int n)
{
    //二级指针动态申请二维数组
    double** arr = (double**)malloc(sizeof(double*) * n); //只开辟了n个存放双精度浮点的空间
    if (arr == NULL)
    {
        return NULL;
    }

    //对每个一维数组开辟空间
    for (int i = 0; i < n; i++)
    {
        arr[i] = (double*)malloc(sizeof(double) * n); //给每个一级指针arr[i]分配n个双精度浮点的空间
        if (arr[i] == NULL)
        {
        return NULL;
        }
    }
    return arr;
}


double** calculate(double** arr1, double** arr2, int n, char op)
{
    double** result = AllArr(n);
    if (op == '+')
    {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
    else if (op == '-')
    {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
    }
    else if (op == '*')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    return result;
}


void FreeArr(double** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
        arr[i] = NULL;
    }
        free(arr);
        arr = NULL;
}