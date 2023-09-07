#include <unistd.h>

/**
 * _putchar - writes the charchter c to stdout
 * @c: the charchter to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and erno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
