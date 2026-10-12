#include <stdio.h>

int main(void)
{
	char cName[20] = "\0";

	printf("Name: ");
	scanf("%s", cName);

	printf("Hello! %s\n", cName);

	return 0;
}
