#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
Ввести с консоли строку символов произвольной длины (до 80 символов).
По-менять в ней все маленькие символы ‘a’ и ‘b’ на заглавные и
вывести на консоль полу-ченную строку
*/
int main() {
	char str[80];
	scanf("%s", str);
	/*
	int len = strlen(str);
	for (int i = 0; i < len; ++i) {
		str[i] = toupper(str[i]);
	}
	*/
	for (int i = 0; i < 80; i++) {
		if (str[i] == 'a') str[i] = 'A';
		if (str[i] == 'b') str[i] = 'B';
		if (str[i] == '!') str[i] = '?';
	}
	printf("%s", str);
	return 0;
}