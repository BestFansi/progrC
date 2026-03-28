#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>

int main() {
	char str[81];
	scanf("%s", str);
	int len = strlen(str);
	/*
	for (int i = 0; i < len; ++i) {
		str[i] = toupper(str[i]);
	}
	*/
	for (int i = 0; i < len; i++) {
		if (str[i] == 'a') {
			str[i] = 'A';
		}
		else if (str[i] == 'b') {
			str[i] = 'B';
		}
		else if (str[i] == '!') {
			str[i] = '?';
		}
	}

	printf("%s", str);
	return 0;
}
