#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by new line
 * Return: The result
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar(i * 10);
	}

	_putchar('\n');
}

