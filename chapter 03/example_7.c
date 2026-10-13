#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char cResponse = '\0';

	printf("Please enter a digit: ");
	scanf("%c", &cResponse);

	if (isdigit(cResponse)) {
		printf("\nThank you\n");
	} else {
		printf("\nYou did not enter a digit\n");
	}

	return 0;
}
