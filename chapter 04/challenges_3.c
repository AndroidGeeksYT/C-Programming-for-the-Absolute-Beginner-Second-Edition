#include <stdio.h>

int main(void)
{
	int start, end, step, x;

	printf("Enter the beginning number: ");
	scanf("%d", &start);
	printf("Enter the ending number: ");
	scanf("%d", &end);
	printf("Enter the increment: ");
	scanf("%d", &step);

	for ( x = start; x <= end; x += step) {
		printf("%d\n", x);
	}

	return 0;
}
