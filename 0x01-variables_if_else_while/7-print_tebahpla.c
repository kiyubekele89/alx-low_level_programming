#include <stdio.h>

/**
 * main - print the lowercase letters
 *
 * Return: always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char alpha;

	/* loop through the letters from z to a */
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		/* print the current letter */
		putchar(alpha);
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
