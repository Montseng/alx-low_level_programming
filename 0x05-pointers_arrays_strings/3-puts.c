#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
