/**
 * _memcpy - function that copies memory area.
 * @dest: Pointer to the memory area to be filled
 * @src: The pointer to be used for filling
 * @n: The number of bytes for filling
 *
 * Return: A pointer to the memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		*(dest + itr) = *(src + itr);
	}

	return (dest);
}
