#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char base16[] = "0123456789abcdef";
	int i = 0;

	while (base16[i] != '\0')
	{
		putchar(base16[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
