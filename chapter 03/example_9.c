#include <stdio.h>

int main(void)
{
	char cResponse = '\0';

	printf("\nA\tSports\n");
	printf("B\tGeography\n");
	printf("C\tMusic\n");
	printf("D\tWorld Events\n");
	printf("\nPlease select a category(A-D): ");
	scanf("%c", &cResponse);

	switch (cResponse) {
		case 'a': case 'A':
			printf("\nYou selected sports questions\n");
		break;
		case 'b': case 'B':
			printf("You selected geography questions\n");
		break;
		case 'c': case 'C':
			printf("You selected music questions\n");
		break;
		case 'd': case 'D':
			printf("You selected world event questions\n");
		break;
		default:
			printf("Invalid category\n");
	} //end switch


	return 0;
}
