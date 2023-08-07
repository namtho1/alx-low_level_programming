#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * Only print one argument per line, ending with a new line
 * @argc: number of command-line arguments
 * @argv: pointer to an array of command-line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
