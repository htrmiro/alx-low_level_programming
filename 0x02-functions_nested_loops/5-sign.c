#include "main.h"

**
 * print_sign - print the sign of a number
 * @n - integer received
 * Description - return 0 and print 0 if n is zero
 * return: 1, 0, -1 for greater, equal and less
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
