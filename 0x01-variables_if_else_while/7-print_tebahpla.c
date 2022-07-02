#include <stdio.h>

/**
 * main - print lower case word in reverse order
 * new line follows
 * Return: 0 for sucess
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
