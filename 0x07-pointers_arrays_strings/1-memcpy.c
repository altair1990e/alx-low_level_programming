#include "main.h"

/**
 * _memcpy - copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest
 * @dest: a pointer to the memory area to copy @src into
 * @src: the source buffer to copy characters from
 * @n: the number of bytes to copy from source
 *
 * Return: to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
