#include "main.h"

/**
 * swap_int - swpas the values of two integers
 * @a: integer
 * @b: integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}
