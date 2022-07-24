#include <unistd.h>
#include "main.h"
/** main: print all letters using putchar
 *
 * a
 * z 
 * return: 0 
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

