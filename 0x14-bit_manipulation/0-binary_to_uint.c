#include <stddef.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string containing the binary number.
*
* Return: The converted number, or 0 if:
*         - There is one or more chars in the string b that is not 0 or 1.
*         - b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int power = 1;
int index = 0;

if (b == NULL)
return (0);

while (b[index] != '\0')
index++;

while (--index >= 0)
{
if (b[index] != '0' && b[index] != '1')
return (0);

result += (b[index] - '0') * power;
power *= 2;
}

return (result);

