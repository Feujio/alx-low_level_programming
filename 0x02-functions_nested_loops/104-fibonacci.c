#include <stdio.h>

/**
 * main - main entry
 *
 * Return: On success 0.
 */
int main(void)
{
	long double f_n_2 = 1, f_n_1 = 2, f_n;
	int i;

	printf("%.0Lf, ", f_n_2);
	printf("%.0Lf, ", f_n_1);
	for (i = 3; i < 99; i++)
	{
		f_n = f_n_1 + f_n_2;
		printf("%.0Lf", f_n);
		f_n_2 = f_n_1;
		f_n_1 = f_n;
		if (i == 98)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
