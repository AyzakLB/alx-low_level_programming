#include <stdio.h>
/**
 * main - prints numbers.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int m;

	for (i = 48; i <= 57; i++)
	{
		for (m = i + 1; m <= 57; m++)
		{
			putchar(i);
			putchar(m);
			if (i != 56 ||  m != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
