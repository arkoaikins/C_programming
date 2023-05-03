#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - identifies number as postivie or negative
 * Return: 0 if sucessfull.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}

	printf("\n");

	return (0);
}
