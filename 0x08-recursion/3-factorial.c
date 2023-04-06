#include "main.h"
/**
 * factorial - finds the factorial of a number.
 * @n: variable declaration
 * Return: return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
