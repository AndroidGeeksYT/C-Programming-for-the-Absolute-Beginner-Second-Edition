#include <stdio.h>

int main(void)
{
	int x;

	for ( x = 10; x > 5; x-- ) {
		if ( x == 7 ) {
			continue;
		} //end if
		  
		printf("%d\n", x);

	} //end for loop

	return 0;
} //end main function
