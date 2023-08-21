#include "main.h"
#include <stdio.h>

/**
 * swap_int - takes pointer 98
 * @a: worked
 * @b: working
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
