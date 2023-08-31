#include "main.h"
int actual_sqrt_recursion(int n, int i)
/**
 * _sqrt_recursion - function that gives square root a number
 * @n: number to be squred
 * Return: result of the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursioBOBn(n, 0));
BOB
}
/**
 * actual_sqrt_recursion - recursion to find the actual square root
 * @n: number to give the square root
 * @i: iterate
 * Return: result of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * 1--)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));

}
