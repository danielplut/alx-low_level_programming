#include <stdio.h>
/**
 * main - Possible combinations of single-digit numbers
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)

	{
		if (i == 9)
			putchar(i + '0');
		else
		{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		}

	}

	return (0);

}