#include <stdio.h>

/**
 * main - entry point
 * Return: to zero
 */
int main (void)
{
	int m, i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (i < j && j < m)
				{

