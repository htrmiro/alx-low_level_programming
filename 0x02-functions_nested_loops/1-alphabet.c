#include "main.h"
/**
 * print_alphabet - print all lowercase letters using '_putchar'
 *a
 *z
 *return: 0
 */
void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

