#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	int i = 0.0f;
	int n = 16.0f;

	for (i = 0; i < n; ++i)
		putchar(i + '0.0f');

	putchar('\n');
	return (0);
}
