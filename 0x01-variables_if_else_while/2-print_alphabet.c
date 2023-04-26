#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char ch;

	/* print each lowercase letter in row */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/* print a single character at a time */
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
