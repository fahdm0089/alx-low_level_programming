#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits if failed
 * @b: size of the memory to allocate
 * Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(1);

	return (m);
}
