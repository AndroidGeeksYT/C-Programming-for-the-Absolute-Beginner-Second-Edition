#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	y = x++ * 4;

	printf("\nThe value of y is %d\n", y);
	printf("\nThe value of x is %d\n", x);

	return 0;
}
