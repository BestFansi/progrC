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
int FindSmallest(humen arr[]) {
    int smallest = 3000;
    int small_index = 0;
    for (int i=0; i<4; i++) {
        if (arr[i].birthyear < smallest && arr[i].birthyear != 0) {
            smallest = arr[i].birthyear;
            small_index = i;
        }     
    }
    return small_index;
}
int bubble_sort(humen arr[]){
    humen temp;
    for (int i = 0; i < 4; i++) {
        bool swapped = false;
        for (int j = 0; j < 4 - i; j++) {
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
    for(int i=0; i<4; i++) {
        printf("Please enter the information for the person-%d(firstname, lastname, birth year)\n", i+1);
        scanf("%s %s %d", arr1[i].firstname, arr1[i].lastname, &arr1[i].birthyear);
    }
    /*
    for (int i=0; i<4; i++) {
        int small_index = FindSmallest(arr1);
        arr2[i] = arr1[small_index];
        arr1[small_index].birthyear = 0;
    }
    */
    for (int i = 0; i < 4; i++) {
        arr2[i] = arr1[i];
    }
    bubble_sort(arr2);
    for (int i=0; i<4; i++) {
        printf("%s %s %d\n", arr2[i].firstname, arr2[i].lastname, arr2[i].birthyear);
    }
    return 0;
}