#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printout characters in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	putchar('\n');

	return (0);
}
