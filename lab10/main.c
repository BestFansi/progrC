//Написать программу вычисления максимального числа из введенных пользователем в виде одной строки.
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

#define FIND_AVG(arr, n, avg)       \
    for (int i = 0; i < n; i++) {   \
        total += arr[i];            \
    }                               \
    avg = (double) total / n;       \

int main() {
    char input[100];
    int arr[100];
    int count = 0;
    int max;
    int total = 0;
    double avg;

    printf("Please enter numbers: ");
    fgets(input, 100, stdin);

    char* token = strtok(input, " \n");

    while (token != NULL) {
        arr[count] = atoi(token);
        count++;

        token = strtok(NULL, " \n");
    }

    FIND_MAX(arr, count, max);
    FIND_AVG(arr, count, avg);

    printf("array:");

    for (int j = 0; j < count; j++) {
        printf(" %d", arr[j]);
    }
    printf("\n");

    printf("The biggest number is %d\n", max);
    printf("average = %.2lf\n", avg);
    return 0;
}