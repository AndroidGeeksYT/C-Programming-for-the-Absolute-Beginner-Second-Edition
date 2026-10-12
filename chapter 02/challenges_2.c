#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, x = 0, y = 0;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("X: ");
	scanf("%d", &x);
	printf("Y: ");
	scanf("%d", &y);

	printf("Result: %d\n", (a - b) * (x - y));

	return 0;
}
