#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

int main(void)
{
	int x = 0;
	int iNumQuestions = 0;
	int iResponse = 0;
	int iRandNum1 = 0;
	int iRandNum2 = 0;
	int iCorrect = 0;
	int iIncorrect = 0;

	srand((unsigned int)time(NULL));

	printf("\nMath Quiz Program\n");
	printf("How many questions: ");
	scanf("%d", &iNumQuestions);

	for ( x = 0; x < iNumQuestions; x++) {
		iRandNum1 = rand() % 100 + 1;
		iRandNum2 = rand() % 100 + 1;

		printf("What is %d + %d: ", iRandNum1, iRandNum2);
		scanf("%d", &iResponse);

	if ( iResponse == iRandNum1 + iRandNum2 ) {
		printf("Congratulations! You are correct: %d\n", iRandNum1 + iRandNum2);
		iCorrect++;
	}
	else {
		printf("Incorrect! Answer is: %d\n", iRandNum1 + iRandNum2);
		iIncorrect++;
	} //end if function
	
	} //end for loop

	printf("\nCorrect: %d Incorrect: %d", iCorrect, iIncorrect);

	return 0;
} //end main function
