#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main: prints files variable n and says if it is positive, negative or zero */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == o)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}