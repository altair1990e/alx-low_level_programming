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

	printf("Size of a char: %ld bytes\n", sizeof(c));
	printf("Size of an int: %ld bytes\n", sizeof(i));
	printf("Size of a long int: %ld bytes\n", sizeof(L));
	printf("Size of a long long int: %ld bytes\n", sizeof(LL));
	printf("Size of float: %ld bytes\n", sizeof(f));
	return (0);
}
