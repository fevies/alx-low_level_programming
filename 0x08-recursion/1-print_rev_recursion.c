/**
 * _print_rev_recursion - prints a string in reverse.
 *
 *@s: pointer to string;
 *Return: Always zero;
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursiion(s + 1);
	}
	else
	{
		_putchar(*s);
	}
