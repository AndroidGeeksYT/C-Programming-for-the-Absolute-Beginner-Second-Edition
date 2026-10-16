#include <stdio.h>

int main(void)
{
	int x;

	for ( x = 100 ; x >= 1; x -= 10) {
		printf("%d\n", x);
	}

	return 0;
}
