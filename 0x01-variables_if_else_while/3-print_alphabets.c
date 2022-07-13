#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	char str1[26] = "abcdefghijklmnopqrstuvwxyz";
	char str2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int n = 26;

	for (i = 0; i < n; ++i)
		putchar(str1[i]);

	for (i = 0; i < n; ++i)
		putchar(str2[i]);

	putchar('\n');
	return (0);
}
