#include <stdio.h>

/**
 *main - entry point
 *spits out the lower case alphabet,  no more
 *than twice
 *Return: 0
*/

int main(void)
{
char c = 'a';

for (c <= 'z')
{
putchar(c);
c++;
}
c = 'A';
for (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
