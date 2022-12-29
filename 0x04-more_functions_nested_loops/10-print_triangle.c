#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle to print
 * Return : nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
