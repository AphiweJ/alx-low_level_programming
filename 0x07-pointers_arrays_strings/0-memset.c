#include "main.h"
/**
 * _memset - Fuction that fills memory with a specifci byte value
 * @s: the starting address of memory to be filled
 * @b: desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new byte value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
