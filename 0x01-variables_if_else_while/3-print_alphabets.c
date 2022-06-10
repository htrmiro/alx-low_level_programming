#include <stdio.h>

/**
 *main - entry point
 *spits out the lower case alphabet,  no more
 *than twice
 *Return: 0
*/

int main(void)
{
	char c;

	while (c = 'a'; c <= 'z'; c++);
	{
		putchar(c);
	}
	c = 'A';
	while (c = 'A'; c <= 'Z'; c++);
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
