/*
Создать текстовый файл с записями, включающие имя/фамилию человека, год рожде-ния, пол и рост (в метрах).
Упорядочить элементы по году рождения, имени/фамилии, полу или росту.
Вывести результат. Указать элемент, по которому следует упорядо-чить, через консоль.
А также реализовать возможность задавать несколько полей для упорядочивания.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
  char name[20];
  int birthyear;
  char gender[10];
  double height;
} humen;

void SortByName(humen arr[]);
void SortByYear(humen arr[]);
void SortByGender(humen arr[]);
void SortByHeight(humen arr[]);

int main() {
  humen arr1[4], arr2[4];
  //создать файл
  FILE* file = fopen("records.txt", "w");

  fprintf(file, "Антон 1997 муж 1.78\n");
  fprintf(file, "Павел 2006 муж 1.82\n");
  fprintf(file, "Лю 2004 муж 1.88\n");
  fprintf(file, "Лена 1983 жен 1.68\n");

  fclose(file);
  //читать файл
  FILE* file1 = fopen("records.txt", "r");

  for (int i = 0; i < 4; i++) {
    fscanf(file1, "%s %d %s %lf", arr1[i].name, &arr1[i].birthyear, arr1[i].gender, &arr1[i].height);    
  }

  fclose(file1);
  //copy 
  for (int i = 0; i < 4; i++){
    arr2[i] = arr1[i];
  }

  //Упорядочить
  char a[10];

  while (1) {
    printf("по какому элементу упорядочить(имя, год, пол, рост): ");
    scanf("%s", a);

    if (strcmp(a, "имя") == 0) {
      SortByName(arr2);
      for (int i=0; i<4; i++) {
        printf("%s %d %s %.2lf\n", arr2[i].name, arr2[i].birthyear, arr2[i].gender, arr2[i].height);
      }
    }
    else if (strcmp(a, "год") == 0) {
      SortByYear(arr2);
      for (int i=0; i<4; i++) {
        printf("%s %d %s %.2lf\n", arr2[i].name, arr2[i].birthyear, arr2[i].gender, arr2[i].height);
      }
    }
    else if (strcmp(a, "пол") == 0) {
      SortByGender(arr2);
      for (int i=0; i<4; i++) {
        printf("%s %d %s %.2lf\n", arr2[i].name, arr2[i].birthyear, arr2[i].gender, arr2[i].height);
      }
    }
    else if (strcmp(a, "рост") == 0) {
      SortByHeight(arr2);
      for (int i=0; i<4; i++) {
        printf("%s %d %s %.2lf\n", arr2[i].name, arr2[i].birthyear, arr2[i].gender, arr2[i].height);
      }
    }
    else if (strcmp(a, "quit") == 0) {
      break;
    }
    else {
      printf("Ошибка! Введите заново");
    }
  }
  
  return 0;
}
void SortByName(humen arr[]) {
  humen temp;
  for (int i = 0; i < 4; i++) {
        bool swapped = false;
        for (int j = 0; j < 3 - i; j++) {
            if (strcmp(arr[j].name, arr[j + 1].name) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void SortByYear(humen arr[]) {
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
void SortByHeight(humen arr[]) {
  humen temp;
  for (int i = 0; i < 4; i++) {
        bool swapped = false;
        for (int j = 0; j < 3 - i; j++) {
            if (arr[j].height > arr[j + 1].height) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void SortByGender(humen arr[]) {
  humen temp;
  for (int i = 0; i < 4; i++) {
        bool swapped = false;
        for (int j = 0; j < 3 - i; j++) {
            if (strcmp(arr[j].gender, arr[j + 1].gender) < 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}