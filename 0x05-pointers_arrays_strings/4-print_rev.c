#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function takes a string as input and prints its
 * characters in reverse order, followed by a new line character.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print characters in reverse order */
	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}

	_putchar('\n');
}
