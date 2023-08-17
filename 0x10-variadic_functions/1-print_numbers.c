#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Print a list of numbers followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* ...: The integers to be printed.
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}

