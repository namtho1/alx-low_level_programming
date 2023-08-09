#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}

