#include <stdio.h>

/**
 * main - print all possible combination of a digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int digit;

	/* loop through the digits from 0 to 9 */
	for (digit = 0; digit < 10; digit++)
	{
		/* print the current digit */
		putchar(digit + '0');
		/* checks if it not equal to 9 */
		if (digit != 9)
		{
			/* print a white space */
			putchar(',');
			putchar(' ');
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
