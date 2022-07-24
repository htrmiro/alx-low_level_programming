#include "main.h"
/**
 * print_alphabet_x10 - print all lowercase letters 10 times using '_putchar'
 *return: 0
 */
void print_alphabet(void)
{
	int i = 0;
	char c;
		while (i < 10)
		{
			c = 'a';
			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			_putchar('\n');
			i++;
		}
}
