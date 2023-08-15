#include <stdio.h>

/**
 * main - Print single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char base10[] = "0123456789";
	int i = 0;

	while (base10[i] != 0)
	{
		putchar(base10[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
