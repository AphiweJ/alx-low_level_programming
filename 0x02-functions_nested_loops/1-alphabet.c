#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
	{

		putchar(alpha[i]);

	}

	putchar('\n');
	return (0);
}
