#include "main.h"

int main_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - compute the result actually
 * @n: number to calculate the sqaure root of
 * @i: counter
 * Return: an integer
 */
int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recursion(n, i + 1));
}
