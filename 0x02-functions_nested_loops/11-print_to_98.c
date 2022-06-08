#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: an integer whcih represent either the maximum or the minimum
 *
 * Return: Nothing
 * Description: numbers are separated by a comma, followed by a space
 * The numbers are printed in order
 * the number number is the number passed to the function
 * the last printed number is 98
 *
 */
void print_to_98(int n)
{
	int i = 0, min, max;

	if (n > 98)
	{
		max = n;
		min = 98;
		for (i = max; i >= min; i--)
		{
			if (i != min)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		max = 98;
		min = n;
		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
