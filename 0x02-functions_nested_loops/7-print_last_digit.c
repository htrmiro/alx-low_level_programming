#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a - int type integer , positive or negative
 * Description - Prints out last digit of number.
 * Return: the last digit of @a.
*/

int print_last_digit(int a)
{
	int av;
	if (a > 9 || a < 9)
	{
		return (av % 10);
	}
        else
	{
		return (av);
	}
}
