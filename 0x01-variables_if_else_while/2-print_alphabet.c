#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0 when successful
 */
int main(void)
{
	char print_alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(print_alpha[i]);
	}
	putchar('\n');
	return (0);
}
