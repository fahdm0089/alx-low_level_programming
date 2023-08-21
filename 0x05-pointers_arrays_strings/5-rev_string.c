#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string parameter input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string lenth without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;
	/*swap the string by looping to half string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = temp;
	}
}
