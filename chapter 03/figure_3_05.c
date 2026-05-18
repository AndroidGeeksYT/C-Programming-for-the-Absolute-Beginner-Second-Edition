#include <stdio.h>

int main(void)
{
	int iResponse = 0;

	printf("\n\tAC Control Unit\n");
	printf("\n1\tTurn the AC on\n");
	printf("2\tTurn the AC off\n");
	printf("\nEnter your selection: ");
	scanf("%d", &iResponse);

	if(iResponse == 1)
		printf("\nAC is now on\n");
	if(iResponse == 2)
		printf("\nAC is now off\n");

	return 0;
}
