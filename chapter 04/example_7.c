#include <stdio.h>

int main(void)
{
	int x;

	for ( x = 10; x > 5; x-- ) {
		if ( x == 7 ) {
			break;
		} //end if
	} //end for loop
	
	printf("\n%d\n", x);

	return 0;
} //end main function
