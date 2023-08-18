/**
* int_index - Searches for an integer in an array using a comparison function.
* @array: Pointer to the array of integers.
* @size: Number of elements in the array.
* @cmp: Pointer to the comparison function.
*
* Return: Index of the first element for which cmp function does not return 0,
*         or -1 if no element matches or size is <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}

