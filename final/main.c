#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//#define N 18

int main() {
    //time start
    clock_t t_start,t_end;
    t_start = clock(); 

    int N;
    int i, j;
    time_t t;

    //create array
    printf("N = ");
    scanf("%d", &N);

    int* numbers = (int*)malloc(sizeof(int) * N);

    //random numbers
    srand((unsigned) time(&t));

    for (i = 0; i < N; i++) {
        numbers[i] = rand() % 50;
    }

    //write into input.txt
    FILE* input = fopen("input.txt", "wt");

    //fprintf(input, "35 350 ");
    for (i = 0; i < N; i++) {
        fprintf(input, "%d ", numbers[i]);
    }

    fclose(input);

    //clear matrix
    free(numbers);

    ////////////////////////////////////////////////////////////////////////////////////////////////

    // 1)

    //read & write file

    input = fopen("input.txt", "rt");
    FILE* output = fopen("output.txt", "wt");

    int num;
    while (fscanf(input, "%d ", &num) == 1) {
        if (num % 5 == 0 && num % 7 == 0) {
            fprintf(output, "ПЯТЬСЕМЬ ");
        }
        else if (num % 5 == 0) {
            fprintf(output, "ПЯТЬ ");
        }
        else if (num % 7 == 0) {
            fprintf(output, "СЕМЬ ");
        }
        else {
            fprintf(output, "%d ", num);
        }
    }

    fclose(output);
    fclose(input);

    ////////////////////////////////////////////////////////////////////////////////////////////////

    // 2)

    //create matrix
    int M = sqrt(N);
    
    int** matrix = (int**)malloc(sizeof(int*) * M);
    for (i = 0; i < M; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * M);
    }

    //input value
    input = fopen("input.txt", "rt");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            fscanf(input, "%d ", &num);
            matrix[i][j] = num;
        }
    }
    fclose(input);

    //print matrix
    printf("\nmatrix\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    //calculate sums of row and column
    int sum_row;
    int sum_column;

    printf("\nsum of row: \n");
    for (i = 0; i < M; i++) {
        sum_row = 0;
        for (int j = 0; j < M; j++) {
            sum_row += matrix[i][j];
        }
        printf("%d\n", sum_row);
    }

    printf("\nsum of column: \n");
    for (j = 0; j < M; j++) {
        sum_column = 0;
        for (int i = 0; i < M; i++) {
            sum_column += matrix[i][j];
        }
        printf("%d\n", sum_column);
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////

    //time end
    t_end = clock();

    double duration = (double)(t_end - t_start) / CLOCKS_PER_SEC; 

    printf("\ntime = %f", duration);

    return 0;
}