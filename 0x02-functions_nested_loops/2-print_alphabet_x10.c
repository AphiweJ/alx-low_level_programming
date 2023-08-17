#include <stdio.h>
/**
 * main - Prints alphabet 10 times
 *
 * Return: 0 (Success)
 */
int main(void)
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
