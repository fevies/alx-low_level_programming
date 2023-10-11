#include "main.h"

/**
 *_puts_recursion - function that prints string followed by new line.
 *
 *@s: pointer to string
 *Return : void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
	{
		_putchar('\n');
	}
}
