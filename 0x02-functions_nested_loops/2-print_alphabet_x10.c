#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowcase.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char alpha;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
