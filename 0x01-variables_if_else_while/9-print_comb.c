#include <stdio.h>
/**
 * main - Print all combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
        int num;

        while (num <= 9)
        {
                putchar(num + '0');
                if (num <= 8)
                {
                        putchar(',');
                        putchar(' ');
                }
                num++;
        }
        putchar('\n');
        return (0);
}
