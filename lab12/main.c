//Написать программу-календарь. Пользователь может указать даты в формате:
//
//- гггг.мм.дд – программа вычисляет день недели соответствующий данной дате;
//- гггг.мм – программа выводит календарь за данный месяц;
//- гггг – календарь за год;
//- now – текущую дату.

#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char input[20];
    int year, month, day;

    fgets(input, sizeof(input), stdin);

    if (strncmp(input, "now", 3) == 0) {
        struct tm *local;
        time_t t;
        t = time(NULL);
        local = localtime(&t);
        printf("Local time and date: %s", asctime(local));
    }
    else if (sscanf(input, "%d.%d.%d", &year, &month, &day) == 3) {
    // yyyy.mm.dd
    // 这里用 struct tm + mktime 计算星期几
    }
    else if (sscanf(input, "%d.%d", &year, &month) == 2) {
    // yyyy.mm
    // 这里输出这个月的日历
    }
    else if (sscanf(input, "%d", &year) == 1) {
    // yyyy
    // 这里输出这一年的日历
    }
    return 0;
}
