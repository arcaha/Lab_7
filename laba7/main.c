#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "laba7.h"
int main() {
	long num = 0;
	char str[20];
	printf("Input number: ");
	scanf("%ld", &num);
	ltoah(num, str);
	printf("%s", str);
	return 0;
}