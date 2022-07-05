#include "main.h"

/**
 * print_sign - prints the sign
 * @n: number to check
 * Return: 1 and prints + if n > zero
 * 0 if n = 0
 * -1 is printed if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

