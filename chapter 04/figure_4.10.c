#include <stdio.h>

int main(void)
{
	int iSelection = 0;

	while ( iSelection != 4 ) {
		printf("1\tDeposit funds\n");
		printf("2\tWithdraw funds");
		printf("3\tPrint balance\n");
		printf("4\tQuit\n");
		printf("Enter your selection (1-4): ");
		scanf("%d", &iSelection);
	} //end while loop
	
	printf("\nThank you\n");

	return 0;
} //end main function
