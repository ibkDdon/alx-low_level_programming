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

	for (i = 0; i < n; ++i)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
