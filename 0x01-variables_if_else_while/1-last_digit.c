#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that assigns a random number to n followed by new line
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	if (i < 6 && i != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
