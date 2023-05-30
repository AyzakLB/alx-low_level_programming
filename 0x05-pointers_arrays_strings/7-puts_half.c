#include "main.h"

void puts_half(char *str)
{
	int n = 0;
        int i;

        while (*(str + n) != '\0')
        {
                n++;
        }
	if (n % 2 == 0)
	{
		i = n / 2;
	} else {
		i = (n + 1) / 2; 
	}
	for (; i < n; i++)
        {
                        _putchar(*(str + i));

        }
	_putchar('\n');
}
