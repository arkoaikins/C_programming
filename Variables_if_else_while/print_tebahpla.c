#include <stdio.h>

/**
 * main - prints lowercase alphabets from z-a
 * Return: 0 if sucess
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
