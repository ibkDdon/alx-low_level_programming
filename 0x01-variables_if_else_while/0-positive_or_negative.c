#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Description
 * Return: return value
 */
int main(void)
{
	int n;

	n = rand()
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("strange number\n");
	return (0);
}
