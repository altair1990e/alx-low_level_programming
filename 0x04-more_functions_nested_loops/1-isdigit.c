#include "main.h"

/**
 * _isdigit - checks if character is a number between 0-9
 * @c: input number
 * Return: 1 if is a number (0-9), 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
