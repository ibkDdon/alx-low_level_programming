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
	int j = 1;
	int k = 10;

	for (i = 0; i < n; ++i)
	{
		j = i + 1;
		for (; j < k; ++j)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
