#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if @c is uppercase. Otherwise 0.
 */
int _isupper(int c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}