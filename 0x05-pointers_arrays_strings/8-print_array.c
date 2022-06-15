#include <stdio.h>
#include "main.h"

/**
 * print_array - print out array with commas
 * @a: array of integers
 * @n: number of elements to be printed out
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
