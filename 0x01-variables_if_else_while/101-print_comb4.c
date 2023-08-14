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
	int k = '0';

	while (n <= '7')
	{
		while (g <= '8')
		{
			while (k <= '9')
			{
				if (n < g && g < k)
				{
					putchar(n);
					putchar(g);
					putchar(k);
					if (!(n == '7' && g == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = '0';
			g++;
		}
		g = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
