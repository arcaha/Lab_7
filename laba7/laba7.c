#include <stdio.h>
#include <stdlib.h>
#include "laba7.h"
void ltoah(long num, char* s) {
	int i = 0, revers = 0;
	if (num < 0)
	{
		printf("-");
		num = num * (-1);
	}
	while (num != 0)
	{

		s[i] = num % 16;
		num = num / 16;
		if (s[i] <= 9)
		{
			s[i] = s[i] + '0';
		}
		else
		{
			s[i] = s[i] + 'A' - 10;
		}
		i++;
	}
	if (i == 0)
	{
		s[i] = '0';
		i++;
	}
	s[i] = '\0';
	for (int k = 0; k < i / 2; k++) {
		revers = s[k];
		s[k] = s[i - 1 - k];
		s[i - 1 - k] = revers;
	}

}