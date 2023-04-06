#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: variable declaration
 * @y: variable declaration
 * Return: value of the raised number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
