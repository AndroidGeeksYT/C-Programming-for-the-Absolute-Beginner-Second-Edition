/* Allow a customer to deposit or withdraw a money from a bank account,
 * and if a user elects to withdraw funds, ensure that sufficient -
 * monies exist.
 * 
 * if action == deposit
 *	Deposit funds into account
 * else
 *	if balance < withdraw amount
 *		Insufficient funds for transaction
 *	else
 *		Withdraw monies
 *	end if
 * end if
 */

#include <stdio.h>

int main(void)
{
	float fDeposit = 0.0;
	float fBalance = 100.25;
	float fWithdraw = 0.0;
	int iAction = 0;

	if ( iAction == fDeposit ) {
		printf("Enter amount to deposit: ");
		scanf("%f", &fDeposit);
		printf("\nNew Balance: $%.2f\n", fDeposit + fBalance);
	}
	else {
		printf("Enter amount to withdraw: ");
		scanf("%f", &fWithdraw);
		printf("\nNew Balance: $%.2f\n", fBalance - fWithdraw);
	} //end if

	return 0;
} //end main function
