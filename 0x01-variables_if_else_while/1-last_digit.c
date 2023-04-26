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
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* last digit of n */
	num = n % 10;

    /* checks and print the last digit */
		if (num > 5)
		{
		/* print if the last digit is greater than 5 */
			printf("Last digit of %d is %d and is greater than 5\n", n, num);
		}
		/* if the above condition is not true execute this */
		else if (num == 0)
		{
			/* if the last digit is equal to 0 print this */
			printf("Last digit of %d is %d and is 0\n", n, num);
		}
		else if (num < 6 && num != 0)
		{
			/* if the last digit is < 6 & != 0 print this */
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
		}
		return (0);
}
