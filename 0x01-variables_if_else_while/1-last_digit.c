#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - a program to print last digit of the number
 * Return: always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is zero", n, l);
	else if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 not zero", n, l);

	printf("\n");

	return (0);
}
