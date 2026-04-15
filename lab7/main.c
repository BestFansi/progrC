#include <stdio.h>
#include <stdbool.h>
/*
Объявить тип-структуру humen, включающую имя человека, фамилию и год рождения.
Объявить два массива из четырёх элементов типа humen.
Ввести с консоли или из фай-ла элементы одного массива и построить на их основе другой, упорядочив элементы по годам рождения.
Вывести результат.
*/
typedef struct {
        char firstname[50];
        char lastname[50];
        int birthyear;
    } humen;

void bubble_sort(humen arr[]){
    humen temp;
    for (int i = 0; i < 4; i++) {
        bool swapped = false;
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j].birthyear > arr[j + 1].birthyear) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
int main() {  
    humen arr1[4], arr2[4];
    //read file
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        return 1;
    }
    for (int i = 0; i < 4; i++) {
        fscanf(file, "%s %s %d", arr1[i].firstname, arr1[i].lastname, &arr1[i].birthyear);
    }
    fclose(file);

    //sort
    for (int i = 0; i < 4; i++) {
        arr2[i] = arr1[i];
    }
    bubble_sort(arr2);
    //output
    for (int i=0; i<4; i++) {
        printf("%s %s %d\n", arr2[i].firstname, arr2[i].lastname, arr2[i].birthyear);
    }
    return 0;
}