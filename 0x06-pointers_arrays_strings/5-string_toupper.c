#include "main.h"

/**
 * string_toupper - changes all lowercaseletters
 * of a string to uppercase
 * @s: input string
 *
 * Return: to destination
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if ((*(s + a) >= 97) && (*(s + a) <= 122))
			*(s + a) = *(s + a) - 32;
		a++;
	}
	return (s);
}
