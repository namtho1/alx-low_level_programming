#include "main.h"

/**
 * print_triangle - Prints a triangle with a given size.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		hashes = i;

		for (j = 0; j < spaces; j++)
			_putchar(' ');

		for (j = 0; j < hashes; j++)
			_putchar('#');

		_putchar('\n');
	}
}
