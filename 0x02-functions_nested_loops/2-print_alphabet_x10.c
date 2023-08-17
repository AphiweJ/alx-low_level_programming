#include <stdio.h>
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 26; j++)
		{
		putchar(alpha[j]);
		}

	putchar('\n');
	}
}
