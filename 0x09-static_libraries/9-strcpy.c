#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 *
 * Description: this function copy the string pointed to by pointer 'src' to
 * the buffer pointed to 'dest'
 *
 * Return: pointer to 'dest'
*/


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (dest[i - 1] != '\0');

	return (dest);
}
