/* 
 * Name: Challenges 05
 * Purpose: Commission = Rate * (Sales Price - Cost)
 * Author: Android Geeks
 */

#include <stdio.h>

int main(void)
{
	float fSalePrice = 0, fCost = 0, fRate = 0, fCommission = 0;

	printf("Enter sale price: $");
	scanf("%f", &fSalePrice);
	printf("Enter cost: $");
	scanf("%f", &fCost);
	printf("Enter commission rate: ");
	scanf("%f", &fRate);

	fCommission = fRate * (fSalePrice - fCost);

	printf("Profit (sales - cost): $%.2f\n", (fSalePrice - fCost));
	printf("Commission: $%.2f\n", fCommission);

	return 0;
}
