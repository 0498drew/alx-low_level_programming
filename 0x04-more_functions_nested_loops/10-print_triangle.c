#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: int
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j,  s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (s = size - i; s > 0; s--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			if (i == size)
				break;
			_putchar('\n');
		}
	}

	_putchar('\n');

}
