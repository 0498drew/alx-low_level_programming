#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int x;

	srand(time(NULL));

	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		putchar(c);
	}
	putchar(2772 - x);
	return (0);

}

