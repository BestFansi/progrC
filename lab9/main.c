/*
Реализовать программу-калькулятор с возможностью выполнения арифметических действий (+, -), унарный и бинарный вариант.
У пользователя запрашивается выражение, например, "-123.5 + 4 - 456+56",
программа должна решить выражение.
Для разбора входной строки использовать функцию strok.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char input[100], expression[100], c;
    int i, j = 0;

    printf("Please enter an expression: ");
    fgets(input, sizeof(input), stdin);

    int expecting_num = 1; //Определить, следует ли программе прочитать число

    //Преобразовать ввод в формат "-123.5 +4 -456 +56"
    //+- в сочетании с последующими цифрами
    for(i = 0; input[i] != '\0'; i++) {
        c = input[i];
        if ((c == '+' || c == '-') && expecting_num == 1) {
            expression[j] = c;
            j++;
        }
        else if ((c == '+' || c == '-') && expecting_num == 0) {
            expression[j] = ' ';
            j++;
            expression[j] = c;
            j++;
            expecting_num = 1;
        }
        else if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9' || c == '.') {
            expression[j] = c;
            j++;
            expecting_num = 0;
        }
    }
    expression[j] = '\0';

    //printf("%s", expression);

    char *token;
    double result = 0;

    token = strtok(expression, " ");
    while (token != NULL) {
        result += atof(token);

        token = strtok(NULL, " ");
    }

    printf("result = %.2lf\n", result);
        
    return 0;
}