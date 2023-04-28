#include <stdio.h>

/**
 * main - print all possible of three digit
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int digit1;
	int digit2;
	int digit3;

	/* loop through the first digits from 0 to 7 */
	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
			if (digit1 == 7 && digit2 == 8)
			{
				if (digit3 == 9)
					continue;
			}
				putchar(',');
				putchar(' ');
			}
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
