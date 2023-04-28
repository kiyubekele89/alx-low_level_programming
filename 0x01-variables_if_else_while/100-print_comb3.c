#include <stdio.h>

/**
 * main - print all possible of 2 digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int digit1;
	int digit2;

	/* loop through the first digit from 0 to 8 */
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		/* loop through the first digit from 0 to 9 */
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
		/* print the current digit */
			putchar(digit1 + '0');
			putchar(digit2 + '0');
		/* check if two digits = to 8,9 respectively */
			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
