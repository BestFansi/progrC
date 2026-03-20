#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>

int main() {
	char str[80];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = toupper(str[i]);
	}
	printf("%s", str);
	return 0;
}