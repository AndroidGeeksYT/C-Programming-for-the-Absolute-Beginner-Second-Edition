#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int iRandomNum = 0;
	char cResponse = '\0';
	int iResponse = 0;
	srand((unsigned int)time(NULL));

	iRandomNum = (rand() % 10) + 1;


	printf("Guess a number 1 to 10: ");
	scanf(" %c", &cResponse);

	if (isdigit((unsigned char)cResponse)) {
		printf("Awesome!!!\n");

		// If user typed '0', treat it as 10 (since 1-9 cover the rest)
		if (cResponse == '0') {
			iResponse = 10;
		} else {
			iResponse = cResponse - '0';
		}

		if (iResponse == iRandomNum) {
			printf("You guessed right!\n");
		} else {
			printf("Wrong guess!! Answer is %d\n", iRandomNum);
		}
	} else {
		printf("Error: Please enter a digit (1-10).\n");
	}

	return 0;
}
