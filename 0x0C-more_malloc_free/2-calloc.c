#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements
* @size: size of bytes allocated
*
* Return: returns a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

p = malloc(nmemb * size);
if (nmemb == 0 || size == 0 || p == 0)
return (0);

for (i = 0; i < nmemb * size; i++)
*((char *)p + i) = 0;

return (p);
}
