#include <stdio.h>

/**
 * main - tests positive_or_negative function
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/* Commented out the infinite loop to fix the issue */
	/*
	 * while (i < 10)
	 * {
	 *     putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

