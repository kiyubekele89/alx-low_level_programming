#include <stdio.h>

/**
 * main - print all possible combination of a digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char digit;

	/* loop through the digits from 0 to 9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		/* print the current digit */
		putchar(digit);
		/* checks if it not equal to 9 */
		if (digit != '9')
		{
			/* print a white space */
			putchar(' ');
			putchar(',');
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
