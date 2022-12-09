#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *  
 * Return: 0 on success
 */

int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	
	if (r > 5)
	{
		printf("%s %d is %d and is greater than 5\n", last, n, r);
	}
	else if (r == 0)
	{
		printf("%s %d is %d and is 0\n", last, n, r);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", last, n, r);
	}

	return (0);
}
