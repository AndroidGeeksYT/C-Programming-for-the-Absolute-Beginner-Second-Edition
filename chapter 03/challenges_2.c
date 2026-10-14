#include <stdio.h>

int main(void)
{
	int iYear = 0;
	int iChineseZodiac = 0;

	printf("\n\tFortune Cookie\n");

	printf("Enter year of birth: ");
	scanf("%d", &iYear);

	iChineseZodiac = (iYear % 12) + 1;

	switch (iChineseZodiac) {
		case 1:
			printf("Monkey\n");
		break;
		case 2:
			printf("Rooster\n");
		break;
		case 3:
			printf("Dog\n");
		break;
		case 4:
			printf("Pig\n");
		break;
		case 5:
			printf("Rat\n");
		break;
		case 6:
			printf("Ox\n");
		break;
		case 7:
			printf("Tiger\n");
		break;
		case 8:
			printf("Rabbit\n");
		break;
		case 9:
			printf("Dragon\n");
		break;
		case 10:
			printf("Snake\n");
		break;
		case 11:
			printf("Horse\n");
		break;
		case 12:
			printf("Goat\n");
		break;
		default:
			printf("Chinese Zodiac\n");
	}

	return 0;
}
