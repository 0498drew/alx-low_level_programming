#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the product of two positive number
 *
 * @argc: int
 * @argv: char pointer
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long j = 0, len, f = 0, k = 2, i = 1, prod = 1, n;
	char *chd = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	while (i <= 1)
	{
		len = strlen(argv[i]);
		for (; j < len; j++)
		{
			if (strchr(chd, argv[i][j]) != NULL)
			{
				puts("Error");
				exit(98);
			}
		}
		n = strtol(argv[i], NULL, 10);
		prod *= n;
		i++;
	}
	while (k <= 2)
	{
		len = strlen(argv[k]);
		for (; f < len; f++)
		{
			if (strchr(chd, argv[k][f]) == NULL)
				continue;

			puts("Error");
			exit(98);
		}
		n = strtol(argv[k], NULL, 10);
		prod *= n;
		k++;
	}
	printf("%lu\n", prod);
	return (0);
}

