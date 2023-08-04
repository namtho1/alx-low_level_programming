#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /* Add the null terminator at the end of the copied string */

	return (dest);
}
