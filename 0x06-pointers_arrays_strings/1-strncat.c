#include "main.h"

/**
 * *_strncat - Function that concatenate two strings
 * using the most n bytes from src
 * @dest: Input value
 * @src: Input
 * @n: Input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
