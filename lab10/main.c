//Написать программу вычисления максимального числа из введенных пользова-телем в виде одной строки.
//Использовать для этого макрос (без функции), на вход которому подается массив чисел и их количество.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIND_MAX(arr, n, max)       \
    max = arr[0];                   \
    for (int i = 0; i < n; i++) {   \
        if (arr[i] > max) {         \
            max = arr[i];           \
        }                           \
    }                               \

int main() {
    char input[100];
    int arr[100];
    int i = 0;
    int max;

    printf("Please enter numbers: ");
    fgets(input, 100, stdin);

    char* token = strtok(input, " \n");

    while (token != NULL) {
        arr[i] = atoi(token);
        i++;

        token = strtok(NULL, " \n");
    }

    FIND_MAX(arr, i, max);

    printf("The biggest number is %d\n", max);

    return 0;
}