#ifndef OP_H
#define OP_H
double** AllArr(int n);
double** inp(double** arr, int n);
double** outp(double** arr, int n);
double** calculate(double** arr1, double** arr2, int n, char op);
void FreeArr(double** arr, int n);
#endif