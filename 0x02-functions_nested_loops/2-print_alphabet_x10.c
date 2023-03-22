#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 * Return : no return value.
 */

void print__alphabet(void)
{
	char lowercasealpha;

	for (lowercasealpha = 'a'; lowercasealpha <= 'z'; lowercasealpha++;)
	{
		_putchar(lowercasealpha);
	}
}
