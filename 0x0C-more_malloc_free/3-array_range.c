#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: min
* @max: max
*
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *array, i;

if (min > max)
return (NULL);

array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
return (NULL);

for (i = min; i <= max; i++)
*(array + (i - min)) = i;

return (array);
}


