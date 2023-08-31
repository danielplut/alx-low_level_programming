#include "main.h"
/**
 * _pow_recursion - function that raises a number to a power
 * @x: value to be raised
 * @y: exponent
 * Return: result of the exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
