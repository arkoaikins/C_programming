#include <stdio.h>

/**
 * main - prints single digits numbers with ,and space
 * Return: 0 if sucess
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
