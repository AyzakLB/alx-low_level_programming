#include "main.h"
/**
 * rev_string
 * @s: string pointer
 */

void rev_string(char *s)
{
	int c = 0;
	int i = 0;
	char temp;
	
        while (*(s + c) != '\0')
        {
                c++;
        }
	for (i = 0; i < (c / 2); i++)
	{
		temp  = *(s + i);
		*(s + i) = *(s + c - 1 -i);
		*(s + c - 1 -i) = temp;
	}
}
