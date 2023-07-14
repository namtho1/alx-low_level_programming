#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:numbers of base 16 in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char digit;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
