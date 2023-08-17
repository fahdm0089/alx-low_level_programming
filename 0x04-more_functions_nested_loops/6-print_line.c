#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: is the number of the times the _ charchter
 * should be printed
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnCHr - 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
