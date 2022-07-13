#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	int i = 0x0;
	int n = 0x10;

	for (i = 0; i < n; ++i)
		putchar(i + '0');

	putchar('\n');
	return (0);
}
