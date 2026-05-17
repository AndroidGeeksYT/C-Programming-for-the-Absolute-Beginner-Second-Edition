/* 
 * Name: Challenges 02
 * Purpose: Create a program that outputs the given formula f = (a - b)(x - y)
 * Author: Android Geeks
 */

#include <stdio.h>

int main(void)
{
	int iA = 0, iB = 0, iX = 0, iY = 0;

	printf("Enter value of A: ");
	scanf("%d", &iA);
	printf("Enter value of B: ");
	scanf("%d", &iB);
	printf("Enter value of X: ");
	scanf("%d", &iX);
	printf("Enter value of Y: ");
	scanf("%d", &iY);

	printf("The result is %d\n", (iA - iB) * (iX - iY));

	return 0;
}
