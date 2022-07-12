#include "main.h"
#include <stdio.h>

/*
 * function to check something
 */
int main(void)
{
	int n;
	n=402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
/*
 * function test function
 */
void reset_to_98(int *n)
{
	int *n;
	*n=98;
	return (0);
}
