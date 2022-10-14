#include <stdio.h>

/**
 * main - Entry type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int L;
	long long int LL;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(L));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(LL));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
