#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 */
int main(void)
{
	int num;

	srand(time(0));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
