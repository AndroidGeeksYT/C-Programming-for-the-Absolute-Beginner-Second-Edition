#include <stdio.h>

int main(void)
{
	float fRate = 0, fSalePrice = 0, fCost = 0;

	printf("Rate: ");
	scanf("%f", &fRate);
	printf("Sale Price: ");
	scanf("%f", &fSalePrice);
	printf("Cost: ");
	scanf("%f", &fCost);

	printf("Commission: $%.2f\n", fRate * (fSalePrice - fCost));

	return 0;
}
