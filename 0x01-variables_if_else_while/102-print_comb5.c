#include <stdio.h>

/**
 * main - print all possible digit 2 two-digit
 *
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
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
					if (digit3 == 0 && digit4 == 0)
					{
						digit4 = digit2 + 1;
					}
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');
					putchar(digit3 + '0');
					putchar(digit4 + '0');
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