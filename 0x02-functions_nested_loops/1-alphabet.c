#include <stdio.h>
/**
 * print_alphabet - Print alphabet in lowercase followed by a new line
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
	{

		putchar(alpha[i]);
		i++;

	}

	putchar('\n');
}
