#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: preinf hexadecimals
 *
 * Return: Always 0
 */
int main(void)
{
	int val;
	char letter;

	for (val = 0; val <= 9; val++)
		putchar(val % 10 + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
