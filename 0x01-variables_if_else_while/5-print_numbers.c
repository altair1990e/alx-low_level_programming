#include <stdio.h>

/**
 * main - entry point
 * Return: one if there is an error
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
