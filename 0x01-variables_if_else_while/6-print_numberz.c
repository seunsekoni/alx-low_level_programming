#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print 0number zero to nine
 *
 * Return: Always 0
 */
int main(void)
{
        int val;

        for (val = '0'; val < '10'; val++)
                putchar(val);
        putchar('\n');

        return (0);
}
