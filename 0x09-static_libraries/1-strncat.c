/**
 * _strncat - Concatenates two strings up to n bytes from src.
 * @dest: Destination string to be concatenated with.
 * @src: Source string to concatenate.
 * @n: Maximum number of bytes from src to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
