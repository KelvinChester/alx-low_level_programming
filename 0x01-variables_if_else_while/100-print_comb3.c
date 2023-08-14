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
	int n = '0';
	int g = '0';

	while (n <= 9)
	{
		while (g <= 9)
		{
		if (!(n > g) || g == n)
		{
			putchar(n);
			putchar(g);
			if (n == '8' && g == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		g++;
		}
		g = '0';
		n++;
	}
	return (0);
}
