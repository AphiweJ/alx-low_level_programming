#include "main.h"

/**
 * *_strncpy - Function that copies a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 *Return: x_dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
