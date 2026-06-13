#include <stdio.h>

typedef struct {
    char first_name[50];
    char last_name[50];
    int year;
} humen;

int main() {
    int i, j;
    humen people[4], sorted[4], temp;
    
    FILE *file = fopen("People.txt", "rt");

    for (i = 0; i < 4; i++) {
        fscanf(file, "%s %s %d", people[i].first_name, people[i].last_name, &people[i].year);
        sorted[i] = people[i];
    }  

    fclose(file);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (sorted[j].year > sorted[j + 1].year) {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        printf("%s %s %d\n",sorted[i].first_name,sorted[i].last_name,sorted[i].year);
    }

    return 0;
}