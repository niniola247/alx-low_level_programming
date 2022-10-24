#include "main.h"

/**
 * *_strcpy - copies string to given memory location
 * @dest: where the string needs to be copied
 * @src: where the string is
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
