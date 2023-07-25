/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers
 * by using pointers to access and modify their values.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
