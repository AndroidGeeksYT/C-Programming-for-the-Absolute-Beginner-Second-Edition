#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 1;

	x = y++ * 2; // increments x after before the assignment
	
	printf("\nThe value of x is %d\n", x);

	x = 0;
	y = 1;

	x = ++y * 2; // increments x before the assignment

	printf("\nThe value of x is %d\n", x);

	return 0;
 } //end of main function
