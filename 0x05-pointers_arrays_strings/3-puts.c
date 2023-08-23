#include "main.h"
/**
 * _puts - Printing a string followed by a new line
 * @str: Print string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
