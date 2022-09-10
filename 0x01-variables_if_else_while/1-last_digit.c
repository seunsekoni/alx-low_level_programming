#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - Entry point
  * @n: Random number
  * @s: an array of characters
  * @l: a number that holds modul result
  * 
  * Description: print random number.
  * Append 'Last digit of ' to its result.
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;
	char s[] = "Last digit of";
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	l = n % 10;

	if (l > 5)
		printf("%s %d is %d and is greater than 5\n", s, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", s, n, l);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", s, n, l);

	return (0);
}
