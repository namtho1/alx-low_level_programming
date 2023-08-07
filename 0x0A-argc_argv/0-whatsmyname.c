#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Suppress unused parameter warning */
	printf("%s\n", argv[0]);
	return (0);
}
