#include <stdio.h>

/**
 * main - Print single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int base10[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	while (i < 10)
	{
		putchar(base10[i] + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
