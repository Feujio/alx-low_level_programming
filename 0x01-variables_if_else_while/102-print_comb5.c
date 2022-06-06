#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, first_digit_i, first_digit_j, last_digit_i, last_digit_j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			last_digit_i = i % 10;
			first_digit_i = i / 10;
			putchar(first_digit_i + '0');
			putchar(last_digit_i + '0');
			putchar(' ');
			last_digit_j = j % 10;
			first_digit_j = j / 10;
			putchar(first_digit_j + '0');
			putchar(last_digit_j + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (i == 98 && j == 100)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
