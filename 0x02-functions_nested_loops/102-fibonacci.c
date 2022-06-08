#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci, starting with 1 and 2,
 * followed by a new line
 *
 * Return: On success 0.
 */
int main(void)
{
	long f_n_2 = 1, f_n_1 = 2, f_n;
	int i;

	printf("%ld, ", f_n_2);
	printf("%ld, ", f_n_1);
	for (i = 3; i < 51; i++)
	{
		f_n = f_n_1 + f_n_2;
		printf("%ld", f_n);
		f_n_2 = f_n_1;
		f_n_1 = f_n;
		if (i == 50)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
