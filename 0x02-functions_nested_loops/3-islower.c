#include "main.h"

/**
 * _islower - A program that Shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The Charater is ASCII code
 *
 * Return: 1 for for letters. Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else(c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	_putchar('\n');
}
