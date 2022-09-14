#include "main.h"

/**
 * _islower - Entry point for the program
 *
 * @s: argument to be checked
 *
 * Return: Always 0 for success
 */
int _islower(int s)
{
	if (s >= 'a' && s <= 'z')
		return 1;
	else
		return 0;
}
