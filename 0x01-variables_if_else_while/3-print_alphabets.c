#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Descibtion: 'get last digit of a no.'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int g = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (g <= 90)
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
