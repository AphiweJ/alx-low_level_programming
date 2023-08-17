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

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
		putchar(alpha[i]);
		}

	putchar('\n');
	}
}
