#include "main.h"

/**
 * _memset -fills the first n bytes of the memory area
 * pointed to by @s with the constantbyte @c
 * @s: pointer to the memory
 * @b: the character to fill the memory area
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to @s
 */

char *_memset(char *s,  char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
