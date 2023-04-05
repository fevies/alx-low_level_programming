#include "main.h"

/**
 * _puts_recursion -variable to print a string
 * return :no value
 * @s: string
 */
void _puts_recursion(char *s)
{
	if  (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}