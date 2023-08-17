#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 *
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + '0');
		num++;
	} while (num <= 9);
	_putchar('\n');
}
