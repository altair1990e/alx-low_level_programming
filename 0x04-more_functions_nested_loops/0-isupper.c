#include "main.h"

/**
 * _isupper - check if a charaxter is an upper caae letter
 * @c: input character.
 * Return: 1 if it is an uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
