#include "main.h"

/**
 * _puts_recursions - prints a string
 * followed by a new line
 * @s: string
 * Return: null
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
