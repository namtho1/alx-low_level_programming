/**
 * array_iterator - Executes action on each element of an integer array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function that performs an action on each element.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
