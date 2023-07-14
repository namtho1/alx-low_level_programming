#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabet in reverse using putchar and a while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
