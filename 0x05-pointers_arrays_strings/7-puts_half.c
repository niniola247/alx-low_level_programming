#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: passed string pointer
 * Description: If odd number of chars, print (length - 1) / 2
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;

	n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
