#include "main.h"
/**
 * positive_or_negative - checks for positive and negative num
 * @i: integer to be checked
 * Return: 0 always
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
