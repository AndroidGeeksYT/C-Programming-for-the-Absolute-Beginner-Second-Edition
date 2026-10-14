#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

int main(void)
{
	int iRandomNum = 0;
	int iResponse = 0;
	srand((unsigned int)time(NULL));

	iRandomNum = (rand() % 10) + 1;

	printf("\nGuess a number between 1 and 10: ");
	scanf("%d", &iResponse);

	if (iResponse == iRandomNum) {
		printf("\nYou guessed right\n");
	} else {
		printf("\nSorry, you guessed wrong\n");
		printf("The correct guess was %d", iRandomNum);
	}

	return 0;
}
