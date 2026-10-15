#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

int main(void)
{
	int x, iNumQuestions, iResponse, iRndNum1, iRndNum2;
	srand((unsigned int)time(NULL));

	printf("\nEnter number of questions to ask: ");
	scanf("%d", &iNumQuestions);

	for ( x = 0; x < iNumQuestions; x++) {
		iRndNum1 = rand() % 10 + 1;
		iRndNum2 = rand() % 10 + 1;

		printf("\nWhat is %d x %d: ", iRndNum1, iRndNum2);
		scanf("%d", &iResponse);

		if ( iResponse == iRndNum1 * iRndNum2 ) {
			printf("\nCorrect!");
		}
		else {
			printf("\nThe correct answer was %d \n", iRndNum1 * iRndNum2);
		} //end if else
	} //end for loop

	return 0;
} //end main function
