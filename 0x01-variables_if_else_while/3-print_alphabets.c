#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char alpha;

	/* loop through the letters from a to z */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		/* print the current letter */
		putchar(alpha);
	}
	/* loop through the letters from A to Z */
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		/* print the current letter */
		putchar(alpha);
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
