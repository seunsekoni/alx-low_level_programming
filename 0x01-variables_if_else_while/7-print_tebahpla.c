#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
        char val;

        for (val = 'z'; val >= 'a'; val--)
                putchar(val);
        putchar('\n');

        return (0);
}
