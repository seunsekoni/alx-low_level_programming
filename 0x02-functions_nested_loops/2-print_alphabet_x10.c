#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print alphabet times ten
 *
 * Return: Always 0 for success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	}
}
