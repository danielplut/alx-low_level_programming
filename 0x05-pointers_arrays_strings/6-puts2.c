#include "main.h"
/**
 * puts2 - Printing one character out of two
 * @str: input
 * Retrun: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');

}
