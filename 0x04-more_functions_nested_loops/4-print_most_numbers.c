#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 without printing 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
	}

	_putchar('\n');
}
