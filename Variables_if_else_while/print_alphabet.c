#include <stdio.h>

/**
 * main - function that prints alphabet
 * Return: 0 if sucess
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
