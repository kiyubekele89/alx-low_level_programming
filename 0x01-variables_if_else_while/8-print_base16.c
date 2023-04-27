#include <stdio.h>

/**
 * main - print base16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char digit;
	char alpha;

	/* loop through the digits from 0 to 9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		/* print the current digit */
		putchar(digit);
	}
	/* loop through the letters from a to f */
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		/* print the current letter */
		putchar(alpha);
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
