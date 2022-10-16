#include <stdio.h>

/**
 * main - Prints numbers that are single digits
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	printf("\n");

	return (0);
}
