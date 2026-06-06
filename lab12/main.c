//Написать программу-календарь. Пользователь может указать даты в формате:
//
//- гггг.мм.дд – программа вычисляет день недели соответствующий данной дате;
//- гггг.мм – программа выводит календарь за данный месяц;
//- гггг – календарь за год;
//- now – текущую дату.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t current_time;
    time(&current_time);
    printf("Current time: %s", ctime(&current_time));

    return 0;
}
