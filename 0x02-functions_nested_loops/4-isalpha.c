#include "main.h"

/**
 * _isalpha - checks if charachter is aletter
 * both lowercase or uppercase
 *
 * @c: take input from other fuctions.
 *
 * Return: 1 is c if true else 0
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
