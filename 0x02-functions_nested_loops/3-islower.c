#include <stdio.h>
/**
 * _islower - Function returns 1 is c is lowercase else 0 otherwise
 *
 * @c: The character to be checked
 *
 * Return: 1 if true, 0 (Success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
