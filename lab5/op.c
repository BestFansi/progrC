#include <stdio.h>
#include <stdlib.h>
#include "op.h"
 /*
element at index i --
    Address - &A[i] or (A+i)
    Value - A[i] or *(A+i)
    A - gives base address
*/
double** AllArr(int n) //返回的是那个“目录”的首地址，而“目录”里装的都是指针
{
    //二级指针动态申请二维数组
    double** arr = (double**)malloc(sizeof(double*) * n); //只开辟了n个存放双精度浮点的空间
    //在内存里建了一个包含n个格子的一维数组。这个数组里现在不能存具体的数据，它只能用来存地址（指针）。这就是我们的“目录”。arr 指向这个目录的第一个格子。
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

double** inp(double** arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    return arr;
}

double** outp(double** arr, int n){
    printf("result: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
}

