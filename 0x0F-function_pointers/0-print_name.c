/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how the name should be printed.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
