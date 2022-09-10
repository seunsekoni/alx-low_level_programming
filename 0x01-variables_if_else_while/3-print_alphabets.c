#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase and then uppercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char lowerupper;

	for (lowerupper = 'a'; lowerupper <= 'z'; lowerupper++)
		putchar(lowerupper);
	for (lowerupper = 'A'; lowerupper <= 'Z'; lowerupper++)
		putchar(lowerupper);
	putchar('\n');

	return (0);
}
