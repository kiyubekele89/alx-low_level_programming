/*
 * auth: eyarios bekele
 *
 * date: December 9, 2022
 */
#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	/* local variable declaration */
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit < 9; firstDigit++)
	{
		for (secondDigit = 1; secondDigit < 10; secondDigit++)
		{
			if (firstDigit != secondDigit)
			{
				putchar((firstDigit % 10) + '0');
				putchar((secondDigit % 10) + '0');
				if (firstDigit == 8 && secondDigit == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
