#include <stdio.h>
/**
 * main - Entry point
 * Descibtion: 'get last digit of a no.'
 * Return: always 0
 */
int main(void)
{
	int n, o;

	for (n = 0; n <= 99; n++)
	{
		for (o = 0; o <= 99; o++)
		{
			if (n < o && n != o)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				putchar(' ');
				putchar((o / 10) + '0');
				putchar((o % 10) + '0');
				if (n != 98 || o != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
