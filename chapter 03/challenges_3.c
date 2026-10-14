#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>

int main(void)
{
	int iDice1 = 0;
	int iDice2 = 0;
	int iSum = 0;

	srand((unsigned int)time(NULL));

	iDice1 = (rand() % 6) + 1;
	iDice2 = (rand() % 6) + 1;

	iSum = iDice1 + iDice2;

	printf("\n\tDice Game!!!\n");

	if (iSum == 7 || iSum == 11) {
		printf("%d Player wins!!!", iSum);
	} else {
		printf("Your dice is %d and %d overall %d. Thank you for playing.", iDice1, iDice2, iSum);
	}

	return 0;
}
