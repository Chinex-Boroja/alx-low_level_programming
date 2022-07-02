#include <stdio.h>

/**
 * main - print all single digit numbes of base 10 from 0,
 * followed by a new line, using putchar keyword
 * Return: 0 which means success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
