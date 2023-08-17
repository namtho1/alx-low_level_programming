#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Print any type of data passed to the function.
* @format: A list of types of arguments.
* ...: The values to be printed.
* Return: void
*/
void print_all(const char * const format, ...)
{
int i = 0;
char c;
char *str;
va_list args;

va_start(args, format);

while (format != NULL && format[i])
{
switch (format[i])
{
case 'c':
c = (char) va_arg(args, int);
printf("%c", c);
break;

case 'i':
printf("%d", va_arg(args, int));
break;

case 'f':
printf("%f", (float) va_arg(args, double));
break;

case 's':
str = va_arg(args, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;

default:
i++;
continue;
}

if (format[i + 1] != '\0')
printf(", ");

i++;
}

va_end(args);
printf("\n");
}

