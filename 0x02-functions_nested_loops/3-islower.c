#include "main.h"

/**
 * _islower - Checks for lowercase alphabet
 *
 * @c: Character to be checked
 *
 * Return: if character is lowercase, otherwise
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return  (1);
	}
	else
		return (0);
}