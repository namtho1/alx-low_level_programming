#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Description: This function takes a string as input and prints the second
 * half of the string, followed by a new line character. If the number of
 * characters is odd, it prints the last n characters of the string, where
 * n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i;
	int n;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
