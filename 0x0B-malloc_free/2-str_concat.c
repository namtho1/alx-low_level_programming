#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to a new memory space with concatenated strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	s = malloc((length1 + length2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		s[i] = s1[i];
	for (j = 0; j < length2; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}

