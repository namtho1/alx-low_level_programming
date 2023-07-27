/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to be concatenated with.
 * @src: Source string to concatenate.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Concatenate the source string to the destination */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the null terminator to the end of the concatenated string */
	dest[i] = '\0';

	return (dest);
}
