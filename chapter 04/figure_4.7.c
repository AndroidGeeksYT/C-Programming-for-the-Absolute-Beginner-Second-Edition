#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	x = y++ * 4;

	printf("\nThe value of x is %d\n", x);

	y = 0; //reset variable value for demonstration purposes
	
	x = ++y * 4;

	printf("\nThe value of x is now %d\n", x);

	return 0;
}
