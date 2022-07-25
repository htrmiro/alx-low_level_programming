#include "main.h"

/**
 * _islower - Return 1 if it's a letter, 0 if not.
 * @c: char type letter
 * Description: Deduce if it's a letter or not
 * Return: 1 if letter, 0 if not letter
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
