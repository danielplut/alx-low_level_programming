#include <stdio.h>
/**
 * main - Printing all numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char I;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (I = 'a'; I <= 'f'; I++)
		putchar(I);
	putchar('\n');
	return (0);

}
