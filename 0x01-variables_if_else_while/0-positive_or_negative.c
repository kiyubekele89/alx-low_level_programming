#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int n;

	/* variable initialization */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks for pos, zero, neg of a num */
	if (n > 0)
	{
		/* print if the num is "positive" */
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		/* print if the num is "zero" */
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		/* print if the num is "negative" */
		printf("%d is negative\n", n);
	}
	return (0);
}
