/* 
 * Name: Challenges 04
 * Purpose: Formula Total Revenue = Price * Quantity
 * Author: Android Geeks
 */

#include <stdio.h>

int main(void)
{
	float fPrice = 0, fQuantity = 0;

	printf("Enter price: ");
	scanf("%f", &fPrice);
	printf("Enter quantity: ");
	scanf("%f", &fQuantity);

	printf("Total Revenue: $%.2f\n", fPrice * fQuantity);

	return 0;
}
