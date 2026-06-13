#include <stdio.h>

int main () {
    char line[200];
    char a[50];
    char b[50];
    char c[50];
    int year;

    FILE *input = fopen("People.txt", "rt");
    FILE *output = fopen("output.txt", "wt");

    while (fgets(line, sizeof(line), input) != NULL) {
        if (sscanf(line, "%s %s %s %d", a, b, c, &year) == 4 && year > 1980) {
            fprintf(output, "%s", line);
        }
    }

    fclose(input);
    fclose(output);
    
    return 0;
}