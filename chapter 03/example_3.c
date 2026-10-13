#include <stdio.h>

int main(void)
{
	char cResponse = '\0';

	printf("Enter the letter A: ");
	scanf("%c", &cResponse);

	if (cResponse == 'A') {
		printf("\nCorrect response\n");
	} else {
		printf("\nIncorrect response\n");

	}

	return 0;
}
