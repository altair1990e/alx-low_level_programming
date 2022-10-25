#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string pointer
 * Return: string length
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
