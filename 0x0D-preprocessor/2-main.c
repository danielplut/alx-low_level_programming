#include <stdio.h>
/**
 * main - Program that prints the name of a file it was compiled from
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
