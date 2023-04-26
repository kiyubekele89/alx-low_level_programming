#include <stdio.h>

/**
 * main - print the alpha in lowercase except 'a' & 'q'
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char alpha;

	/* loop through the letters except 'a' and 'q' */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		/* check if the current letter is 'e' or 'q' */
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
