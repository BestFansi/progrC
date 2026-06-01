#include <stdio.h>

int main() {
    char input[81];
    scanf("%s", input);
    for (int i = 0; i < 80; i++) {
        if (input[i] == 'a') {
            input[i] = 'A';
        }
        else if (input[i] == 'b') {
            input[i] = 'B';
        }
    }
    printf("%s", input);
}