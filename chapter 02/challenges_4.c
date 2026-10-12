#include <stdio.h>

int main(void)
{
	float fPrice, fQuantity;

	fPrice = 0;
	fQuantity = 0;

	printf("\nPrice: ");
	scanf("%f", &fPrice);
	printf("\nQuantity: ");
	scanf("%f", &fQuantity);
	printf("\nTotal Revenue: $%.2f\n", fPrice * fQuantity);

	return 0;
}
