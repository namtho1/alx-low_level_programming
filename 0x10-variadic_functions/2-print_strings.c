#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Print a list of strings followed by a new line.
* @separator: The string to be printed between the strings.
* @n: The number of strings passed to the function.
* ...: The strings to be printed.
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}

if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}

va_end(args);
printf("\n");
}

