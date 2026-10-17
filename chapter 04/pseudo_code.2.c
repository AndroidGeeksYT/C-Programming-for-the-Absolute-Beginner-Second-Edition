/* while end-of-file == false 
 *	if pay-type == salary then
 *		pay = salary
 *	else
 *		pay = hours * rate
 *	end if
 * loop
 */

#include <stdio.h>

int main(void)
{
	int iEndofFile = 0;
	int iPayType = 0;
	int iHours = 0;
	float fPay = 0.0;
	float fSalary = 0.0;
	float fRate = 0.0;

	printf("\nEmployee Payroll");

	while ( iEndofFile == 0 ) {
		if ( iPayType == 1 ) {
			fPay = fSalary;
		}
		else {
			fPay = iHours * fRate;
		} //end if
	} //end while loop

	return 0;
} //end main function
