#include "main.h"

/**
 * print_last_digit - A program that prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int number;

	numb = n % 10;
	if (number < 0)
	{
		_putchar(-number + '0');
		return (-number);
	}
	else
	{
		_putchar(number + '0');
		return (number);
	}
}
