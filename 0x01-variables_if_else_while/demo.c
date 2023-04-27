#include <stdio.h>

/**
 * main - print base16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* variable declaration */
	char base16;

	/* loop through the digits from 0 to 9 */
	for (base16 = '0'; base16 <= 'f'; base16++)
	{
		/* checks if it is between 0 to 9 */
		if (base16 <= '9')
		{
			/* print if it's base10*/
			putchar(base16);
		}
		/* checks if it is between from a to f */
		else if (!(base16 > '9' && base16 < 'a'))
		{
			/* print the letter from a to f */
			putchar(base16);
		}
	}
	/* print a newline character */
	putchar('\n');
	return (0);
}
