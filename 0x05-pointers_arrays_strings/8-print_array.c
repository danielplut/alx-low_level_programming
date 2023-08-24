#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n statements of an array
 * @a: array
 * @n: number of values to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");

}
