#include <stdio.h>

int main(void)
{
	char cResponse = '\0';

	printf("\n\tAC Control Unit\n");
	printf("\na\tTurn the AC on\n");
	printf("\nb\tTurn the AC off\n");
	printf("\nEnter the selection: ");
	scanf("%c", &cResponse);

	if (cResponse == 'a')
		printf("\nAC is now on\n");


	if (cResponse == 'b')
		printf("\nAC is now off\n");

	return 0;
}
