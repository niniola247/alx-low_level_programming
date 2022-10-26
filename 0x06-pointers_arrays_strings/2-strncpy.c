#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: destination string
 * @src: string to copy from
 * @n: number of chars to copy
 *
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
