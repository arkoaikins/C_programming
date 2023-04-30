#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0 if sucessfull
 */

int main(void)
{
	int i;

	char str[] = "Hello World\n";

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}

	return (0);
}
