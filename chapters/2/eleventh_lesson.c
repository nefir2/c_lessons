#include <stdio.h>

int main(void) {
	//bool: 1 = true; 0 = false.
	if (1) printf("if 1");
	if (0) printf("if 0");
	printf("1 == 2 as int: %d\n127 > 247 as int: %d\n1745 > -457345: %d\n1 != 875: %d\n1 != 25: %d\n\n", 1 == 2, 127 > 247, 1745 > -457345, 1 != 875, 1 != 25);
	
	int x = 5;
	printf("x == 5?\n");
	if (x == 5) {
		printf("true\n");
		x += x;
	}
	printf("x = %d\n\n", x);

	if (x == 10){
		printf("x == 10 is true\n\n");
		x *= 100;
	}
	else {
		printf("x is not equals 10\n\n");
		x *= 2;
	}
	printf("x = %d\n", x);
	if (x < 10) printf("x under 10\n");
	else if (x >= 10 && x < 100) printf("x between 10 and 100\n");
	else printf("x over or equals 100\n\n");

	switch (x) {
		case 5:
			printf("x is 5");
			break;
		case 10:
			printf("x is 10");
			break;
		case 20:
			printf("x is 20");
			break;
		case 100:
			printf("x is 100");
			break;
		case 1000:
			printf("x is 1000");
			break;
		default:
			printf("no matches found for: %d", x);
			break;
	}
	printf("\n\n");
	
	printf("x?v:v : %d\n", x >= 1000 ? x -= x / 2 : x += x); // condition ? ifTrue : ifFalse;

	return 0;
}
