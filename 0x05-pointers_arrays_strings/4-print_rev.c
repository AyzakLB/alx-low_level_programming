#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;
	int c = 0;

	while (*(s + i) != '\0')
	{
		c++;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
