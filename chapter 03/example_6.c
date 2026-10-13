#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char cResponse = '\0';

	printf("Please enter a letter: ");
	scanf("%c", &cResponse);

	if (isdigit(cResponse) == 0) {
		printf("\nThank you\n");
	} else {
		printf("\nYou did not enter a letter\n");
	}

	return 0;
}
