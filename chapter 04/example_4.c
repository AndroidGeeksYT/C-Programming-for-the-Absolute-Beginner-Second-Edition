#include <stdio.h>

int main(void)
{
	int x = 1;
	int y = 2;

	x = y * x + 1; //arithmetic operations performed before assignment
	
	printf("\nThe value of x is: %d\n", x);

	x = 1;
	y = 2;

	x -= y * x + 1; //arithmetic operations performed before assignment

	printf("\nThe value of x is: %d\n", x);

	return 0;
}
