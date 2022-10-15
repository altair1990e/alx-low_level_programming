#include <stdio.h>

/**
 * main - entry point
 * Return: one if there is an error
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
