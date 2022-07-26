#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @a - int type integer , positive or negative
 * Description - Prints out last digit of number.
 * Return: the last digit of @a.
*/

int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
