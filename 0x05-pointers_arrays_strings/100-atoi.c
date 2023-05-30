#include <stdio.h>

int _atoi(char *s)
{
	int slen = 0;
	int digitCount = 0;
	int finalNum = 0;
	int i, firstNum, m, num;
	int sign = 1;

	while (s[slen] != '\0')
	{
		slen++;
	}

	for (i = 0; i < slen; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			firstNum = i;
			break;
		}

		 if (s[i] == '-' && sign == 1)
        {
            sign = 0;
        } else if(s[i] == '-' && sign == 0)
        {
            sign = 1;
        } else {
            sign = 1;
        }
	}

	for (i = firstNum; i < slen; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			break;
		}
		digitCount++;
	}

	for (i = firstNum + digitCount - 1; i >= firstNum; i--)
	{
		num = s[i] - 48;
		for (m = firstNum + digitCount - 1; m > i; m--)
		{
			num = num *10;
		}
		finalNum = finalNum + num;
		
	}

	if (!sign )
	{
		return finalNum * -1;
	}

	return finalNum;
}
