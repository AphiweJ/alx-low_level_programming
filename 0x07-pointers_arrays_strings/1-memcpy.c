#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where n bytes are stored
 *@src: memory where n bytes are copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	while (r < i)
	{
		dest[r] = src[r];
		n--;
		r++;
	}
	return (dest);
}
