#include <stdio.h>
#include "main.h"

/**
 * _strlen - takes pointer 98.
 * @str: worked
 * Return: Always length.
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
