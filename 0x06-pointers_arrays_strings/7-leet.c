/**
 * leet - Encodes a string into 1337.
 * @str: String parameter.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet_letters[] = "aeotlAEOTL";
	char leet_numbers[] = "4307143071";

	while (str[i] != '\0')
	{
		j = 0;
		while (leet_letters[j] != '\0')
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_numbers[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
