#include <stdio.h>

/**
 * _strlen - takes pointer 98.
 * @str: worked
 * Return: Always length.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
