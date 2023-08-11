#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: Number of bytes to allocate
*
* Return: Pointer to the allocated memory
*         If malloc fails, the function terminates with status 98
*/
void *malloc_checked(unsigned int b)
{
int *m;

m = malloc(b);
if (m == 0)
exit(98);

return (m);
}

