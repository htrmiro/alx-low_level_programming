#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: type int integer received, can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1, 0, -1 for greater, equal and less
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
