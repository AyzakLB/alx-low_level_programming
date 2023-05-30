#include "main.h"
/**
 * puts2 - prints
 * @str: pointer
 */
void puts2(char* str)
{
	int n = 0;
	int i;

	while (*(str + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i = i + 2)
	{
			_putchar(*(str + i));
	}
	_putchar('\n');
}
