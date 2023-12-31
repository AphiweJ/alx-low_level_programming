#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number
 *
 * @n: Input
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int lastdgt = n % 10;

	if (lastdgt < 0)
	{
		lastdgt = lastdgt * -1;
	}
	_putchar(lastdgt + '0');

	return (lastdgt);
}
