#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
