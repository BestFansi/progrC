/*
Создать текстовый файл с записями, включающие имя/фамилию человека, год рожде-ния, пол и рост (в метрах).
Упорядочить элементы по году рождения, имени/фамилии, полу или росту.
Вывести результат. Указать элемент, по которому следует упорядо-чить, через консоль.
А также реализовать возможность задавать несколько полей для упорядочивания.
*/
#include <stdio.h>
#include <stdlib.h>
#include <local.h>
typedef struct {
  char name[20];
  int birthyear;
  char gender[3];
  double height;
} humen;

int select() {
  char a[10];
  printf("по какому элементу упорядочить? (имя, год, пол, рост)");
  scanf("%s", a);
  while (1) {
    if (a == 'имя') {
      return 1;
      break;
    }
    else if (a == 'год') {
      return 2;
      break;
    }
    else if (a == 'пол') {
      return 3;
      break;
    }
    else if (a == 'рост') {
      return 4;
      break;
    }
    else {
      printf("Ошибка! Введите заново");
    }
  }
}
void bubble_sort(humen[]) {

}
int main() {
  humen arr[4];
  //create file
  FILE* file = fopen("records.txt", "w");
  if (file == NULL) {
    return 1;
  }
  fprintf(file, "Антон 1997 муж 1,78");
  fprintf(file, "Павел 2006 муж 1,82");
  fprintf(file, "Лю 2004 муж 1,88");
  fprintf(file, "Лена 1983 жен 1,68");
  for (int i = 0; i < 4; i++) {
    fscanf(file, "%s %d %s %f", arr[i].name, arr[i].birthyear, arr[i].gender, arr[i].height);
  }
  fclose(file);

  
  return 0;
}
