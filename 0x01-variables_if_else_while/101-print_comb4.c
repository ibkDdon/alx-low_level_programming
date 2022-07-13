#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	int i = 0;
	int n = 10;
	int m;
	int j;
	int k = 10;
	int l = 10;

	for (i = 0; i < n; ++i)
	{
		j = i + 1;
		for (; j < k; ++j)
		{
			m = j + 1;
			for (; m < l; ++m)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(m + '0');
				if (!(i == 7 && j == 8 && m == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
