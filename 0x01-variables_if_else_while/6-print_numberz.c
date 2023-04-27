#include <stdio.h>

/**
 * main - prints all single digit base 10
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	int digit;

	/* loop through all single digit from 0 to 9*/
	for (digit = 0; digit < 10; digit++)
	{
		/* print int in character represent */
		putchar(digit + '0');
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
