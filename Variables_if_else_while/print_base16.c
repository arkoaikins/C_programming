#include <stdio.h>

/**
 * main - prints base16 numbers in lowercase
 * Return: 0 if sucess
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 97; j <= 102; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
