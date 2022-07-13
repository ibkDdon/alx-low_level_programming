#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	char str1[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;
	int n = 24;

	for (i = 0; i < n; ++i)
		putchar(str1[i]);

	putchar('\n');
	return (0);
}
