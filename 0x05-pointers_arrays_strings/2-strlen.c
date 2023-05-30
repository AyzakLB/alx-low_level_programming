#include "main.h"
/**
 * _strlen - returns lenght of string
 * @p: string
 * Return: int
 */

int _strlen(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		i++;
	}

	return i;
}
