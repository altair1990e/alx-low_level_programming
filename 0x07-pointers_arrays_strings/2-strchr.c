#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: the string being searched
 * @c: the character to be located
 *
 * Return: if character is found, return pointer to first occurence
 * if c is not found - Null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
