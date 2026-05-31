//оздать в отдельном модуле функции с переменным количеством аргументов
//которая вычисляет их сумму, максимум, минимум, среднее арифметическое.

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list list;

    va_start(list, count);

    int total = 0;

    while (count)
    {
        total += va_arg(list, int);
        --count;
    }

    va_end(list);

    return total;
}

int find_max(int count, ...) {
    va_list list;

    va_start(list, count);

    int max = -10000;
    int temp;
    for (int i = 0; i < count; i++) {
        temp = va_arg(list, int);
        if (temp > max) {
            max = temp;
        }
    }

    va_end(list);
    return max;

}

int find_min(int count, ...) {
    va_list list;

    va_start(list, count);

    int min = 10000;
    int temp;
    for (int i = 0; i < count; i++) {
        temp = va_arg(list, int);
        if (temp < min) {
            min = temp;
        }
    }

    va_end(list);
    return min;
}

double avg(int count, ...) {
    va_list list;

    va_start(list, count);

    int total = 0;

    for (int i = 0; i < count; i++) {
        total += va_arg(list, int);
    }

    va_end(list);
    return (double) total/count;

}

int main() {
    printf("%d\n", sum(5, 1, 2, 3, 4, 5));
    printf("%d\n", find_max(5, 1, 2, 3, 4, 5));
    printf("%d\n", find_min(5, 1, 2, 3, 4, 5));
    printf("%.2lf\n", avg(5, 1, 2, 3, 4, 5));

    return 0;
}