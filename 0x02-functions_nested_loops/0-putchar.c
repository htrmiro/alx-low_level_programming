#include <stdio.h>
#include <unistd.h>

/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */

int main(void) 
{
	write(1, " _putchar\n", 9);
	
	return 0;	
}
