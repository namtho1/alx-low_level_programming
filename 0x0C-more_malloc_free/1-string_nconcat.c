#include <stddef.h>  /* For NULL */
#include <stdlib.h>  /* For malloc */

/**
* string_nconcat - conicatenates two strings.
* @s1: string 1
* @s2: string 2
* @n: number of bytes of s2
*
* Return: point to a newly allocated space in memory,
*         which contains s1, followed by the first n
*         bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int length1 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[length1] != '\0')
{
length1++;
}
s = malloc((length1 + n + 1) * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < length1; i++)
s[i] = s1[i];
for (j = 0; j < n; j++, i++)
s[i] = s2[j];
s[i] = '\0';

return (s);
}

