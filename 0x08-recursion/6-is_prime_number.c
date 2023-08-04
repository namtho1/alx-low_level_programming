/**
 * is_prime_helper - helper function to check if the number is prime.
 * @n: integer parameter
 * @i: integer parameter (possible factor)
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - verify if the input integer is a prime number.
 * @n: integer parameter
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
