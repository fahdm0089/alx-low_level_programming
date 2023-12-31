#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 *
 * Return: array of integrs
*/
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
