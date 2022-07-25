#include "main.h"

/**
 * main - print the sign of a number
 * @n - int
 * return 1 and print + if n is greater than zero
 * return 0 and print 0 if n is zero
 * return -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if ( n > 0 )
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}
