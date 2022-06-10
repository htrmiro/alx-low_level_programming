#include <stdlib.h>
#include <time.h>

/** main - main block
* get last digit of random number
* check if greater than 5, if it's 0, or if it's less than 6 
* Return:0
*/


int main(void)
{
	int n;
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        w = n % 10;

	if (w > 5)
		printf(Last digit of %i is %i and is greater than 5\n", n, w);
	else if (w == 0)
		print("Last digit of %i is %i and is 0\n", n, w);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, w);
	return (0);
}
