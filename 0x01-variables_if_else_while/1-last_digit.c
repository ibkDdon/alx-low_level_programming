#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %i", n);
		printf(" is %i and is greater than 5\n", a);
	}
	else if (a == 0)
	{
		printf("Last digit of %i", n);
		printf(" is %i and is 0\n", a);
	}
	else if (a < 6)
	{
		printf("Last digit of %i", n);
		printf(" is %i and is less than 6 and not 0\n", a);
	}
	else
	{
		printf("strange number\n");
	}
	return (0);
}
