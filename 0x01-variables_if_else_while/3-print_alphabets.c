#include <stdio.h>
#include <ctype.h>

/**
 * main - Print in lowercase and then in uppercase
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * followed by new line
 *
 * Return: 0 (Successful)
 */
int main(void)
{
        char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(alpha[i]);
        }
        for (i = 0; i < 26; i++)
        {

                putchar(toupper(alpha[i]));
        }
        putchar('\n');
        return (0);
}
