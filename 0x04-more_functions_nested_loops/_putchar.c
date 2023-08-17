#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the charchter c to stdout
 * @c: the charchter to print
 *
 * Return: on success, 1.
 * on error, -1 is returned. and erno is set appropriatly.
 *
*/

int _putchar(char c);
{
	return (write(1, &c, 1));
}
