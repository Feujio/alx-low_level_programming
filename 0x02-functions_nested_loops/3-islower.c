#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: On success 1. Otherwise 0.
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
