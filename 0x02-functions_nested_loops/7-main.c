#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	putchar(print_last_digit(98));
	putchar(print_last_digit(0));
	r = print_last_digit(-1024);
	putchar(r)
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
