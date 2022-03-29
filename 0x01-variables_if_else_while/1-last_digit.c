#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - determines value of random variables
 *and says if it is positive, negative or zero
 *Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*your code goes there*/
	int last;

	last = n % 10;
	if (last > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	if (last == 0)
	{
		printf("%d is 0\n", n);
	}
	else if (last < 6; last != 0)
	{
		printf("%d is less than and not 0\n", n);
	}
	return (0);
}
