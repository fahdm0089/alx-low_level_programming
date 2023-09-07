#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits if failed
 * @b: size of the memory to allocate
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
