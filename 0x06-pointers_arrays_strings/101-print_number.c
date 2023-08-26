#include "main.h"
/**
 * print_number - function that print an integer
 * @n: input
 * Return: integer
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
		i = -i;
	}
	_putchar(i % 10 + '0');

}
