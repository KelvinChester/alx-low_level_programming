#include <main.h>

/**
 * _puts - takes pointer 98.
 * @str: worked
 * Return: Always length.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
