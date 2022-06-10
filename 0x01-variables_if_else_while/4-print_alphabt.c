#include <stdio.h>

/**
 *main - entry point
 *list every letter except q & e
 *Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		
		if (c != 'q'&& c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
