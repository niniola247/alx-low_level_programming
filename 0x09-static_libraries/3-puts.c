#include "main.h"

/**
 * _puts - print a given string to screen
 * @str: passed pointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
