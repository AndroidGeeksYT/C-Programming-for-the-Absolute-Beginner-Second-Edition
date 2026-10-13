#include <stdio.h>

int main(void)
{
	int iTemperature = 0;

	printf("\n\tAC Control Unit\n");

	if (iTemperature >= 80) {
		// Turn AC on
		printf("\nThe AC is on\n");
	} else {
		// Turn AC off
		printf("\nThe AC is off\n");
	}

	return 0;
}
