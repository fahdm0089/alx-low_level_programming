#include <stdio.h>

/**
 * main - printing alphabets in lower and uppercase
 *
 * Describtion: print the alphabet in lowecase and uppercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar ('\n');

	return (0);
}
