#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 *
 * Description: Program that prints the alphabet in
 * lowercase(exclude "q" and "e") followed by a new line
 *
 * Return: 0(successful)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
	{
		if (alpha[i] != 'e' && alpha[i] != 'q')
			putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
