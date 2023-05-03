#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints last digit of random numbrs
 * Return: 0 if sucessfull
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	i = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, i);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, i);
	}
	printf("\n");
	return (0);
}