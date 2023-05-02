#include <stdio.h>

/**
 * main - print all possible digit 2 two-digit
 *23
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	/* loop through the first digit from 0 to 9 */
	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 9; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				if (digit3 == 0)
					digit4 = digit2 + 1;
				else
					digit4 = 0;
				for (; digit4 < 10; digit4++)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');
					putchar(digit3 + '0');
					putchar(digit4 + '0');
					if (digit1 == 9 && digit2 == 8)
					{
						if (digit3 == 9 && digit4 == 9)
							continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
