#include <stdio.h>

int main(void)
{
	int iSelection = 0;

	do {
		printf("1\tDeposit funds\n");
		printf("2\tWithdraw funds");
		printf("3\tPrint balance\n");
		printf("4\tQuit\n");
		printf("Enter your selection (1-4): ");
		scanf("%d", &iSelection);

	}while ( iSelection != 4 ); //end do while loop

	printf("\nThank you\n");

	return 0;
} //end main function
