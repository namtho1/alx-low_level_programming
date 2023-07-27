/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Destination buffer to copy the string into.
 * @src: Source string to copy from.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Fill the remaining characters in dest with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
