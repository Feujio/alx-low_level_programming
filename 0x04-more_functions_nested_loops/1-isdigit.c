#include "main.h"

/**
 * _isdigit - checks for a digit ( 0 through 9)
 * @c: The integer to check
 *
 * Return: 1 if @c is a digit. Otherwise 0.
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
