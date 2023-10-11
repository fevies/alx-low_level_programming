#include "main.h"
/**
 *factorial - returns the factorial of anumber .
 *@n: integer number to be returned
 *Return: factorial n
 */

int factorial(int n)
{
	while (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
