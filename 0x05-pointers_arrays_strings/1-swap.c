#include "main.h"

/**
 * swap_int - Swaps values of two integers
 *
 * @a: integer to swap
 *
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
