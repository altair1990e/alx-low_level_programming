#include <stdio.h>

/**
 * swap_int - function swaps pointer a and b
 * @a: integer a
 * @b: integer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
