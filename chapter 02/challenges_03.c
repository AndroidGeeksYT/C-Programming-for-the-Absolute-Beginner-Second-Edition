/* 
 * Name: Challenges 03
 * Purpose: Store users name using scanf
 * Author: Android Geeks
 */

#include <stdio.h>

int main(void)
{
	char cUserName[20] = "\0";

	printf("Username: ");
	scanf("%s", &cUserName);

	printf("Hello! %s\n", cUserName);

	return 0;
}
