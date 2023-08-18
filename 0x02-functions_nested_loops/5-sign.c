#include <stdio.h>

/**
 * print_sign - Prints sign of a number and returns 1 and + if n > 0
 *
 * @n: Used as a condition that determines which sign to be printed
 *
 * Return: 1 and prints + if n > 0
 *         0 and prints 0 if n is 0
 *        -1 and prints - if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{

		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
