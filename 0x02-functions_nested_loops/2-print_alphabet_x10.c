#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * followed by new line
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int j = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		j++;
	}
}
