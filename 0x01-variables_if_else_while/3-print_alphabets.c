#include <stdio.h>

/**
 *main - entry point
 *spits out the lower case alphabet,  no more
 *than twice
 *Return: 0
*/

int main(void)
{
	int c;
	c = 'a';
	while (c <= 'z')
	{
		 putchar(c);
		 c++;
	}
	int d;
	d = 'A'
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	
	return (0);
}
