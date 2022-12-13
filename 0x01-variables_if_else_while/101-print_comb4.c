/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	int firstDigit;
	int secondDigit;
	int lastDigit;
	int i = 0;

	for (firstDigit = 0; firstDigit < 8; i++, firstDigit++)
	{
		for (secondDigit = i + 1; secondDigit < 9; i++, secondDigit++)
		{
			for (lastDigit = i + 2; lastDigit < 10; lastDigit++)
			{
				putchar((firstDigit % 10) + '0');
				putchar((secondDigit % 10) + '0');
				putchar((lastDigit % 10) + '0');
				if (firstDigit == 7 && secondDigit == 8 && lastDigit == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
