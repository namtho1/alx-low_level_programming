#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 *
 * Description: This function prints the characters of the given string
 * to the standard output, followed by a new line character.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
