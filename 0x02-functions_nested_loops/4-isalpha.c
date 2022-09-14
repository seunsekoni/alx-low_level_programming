#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * @s: a argument to be checked
 *
 * Return: 0 or 1
 */
int _isalpha(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return (1);
	else
		return (0);
}
