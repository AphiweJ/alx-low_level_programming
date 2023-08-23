#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int result = 0;
	int i;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	s--;
	for (i = result; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
