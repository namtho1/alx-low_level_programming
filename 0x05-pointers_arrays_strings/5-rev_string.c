#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function takes a string as input and reverses its
 * characters in place (modifying the original string).
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string by swapping characters */
	length--;
	while (start < length)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		start++;
		length--;
	}
}
