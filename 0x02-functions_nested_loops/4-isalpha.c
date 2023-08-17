#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Checks the alphabet character
 *
 * @c: Returns 1 if c is a letter, lowercase or uppercase
 *
 * Return: 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

