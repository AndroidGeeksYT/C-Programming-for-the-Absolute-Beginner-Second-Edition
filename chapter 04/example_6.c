#include <stdio.h>

int main(void)
{
	int x = 10;

	do {
		printf("This printf is executed at least once\n");
		x++;
	}while ( x < 10 ); //end do while loop

	while ( x < 10 ) {
		printf("This printf statement will never executed\n");
		x++;
	} //end while loop

	return 0;
} //end main function
