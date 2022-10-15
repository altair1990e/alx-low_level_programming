#include <stdio.h>

/**
 * main - entry point
 * Return: one if there is an errot
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
