/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to be used for filling
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		*(s + itr) = b;
	}

	return (s);
}
