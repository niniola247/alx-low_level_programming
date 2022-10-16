#include <stdio.h>

/**
 * main - Prints lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
