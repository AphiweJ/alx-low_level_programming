#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: String
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}
