#include <stdio.h>
/**
 * main - prints numbers.
 * Return: returns 0.
 */
int main(void)
{
	int i;
	int m;
	int n;

	for (i = 48; i <= 57; i++)
	{
		for (m = i + 1; m <= 57; m++)
		{
			for (n = m + 1; n <= 57; n++)
			{
				putchar(i);
				putchar(m);
				putchar(n);
				if (i != 55 ||  m != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
