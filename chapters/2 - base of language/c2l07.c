#include <stdio.h>

int main(void) {
	printf("1 == 0? %d\n", 1 == 0);
	printf("8 == -18 + 26? %d\n", 8 == -18 + 26);
	
	printf("1 =! 0? %d\n", 1 != 0);
	printf("8 != -18 + 26? %d\n", 8 != -18 + 26);
	
	printf("1 > 0? %d\n", 1 > 0);
	printf("8 > -18 + 26? %d\n", 8 > -18 + 26);

	printf("1 < 0? %d\n", 1 < 0);
	printf("8 < -18 + 26? %d\n", 8 < -18 + 26);

	printf("1 >= 0? %d\n", 1 >= 0);
	printf("8 >= -18 + 26? %d\n", 8 >= -18 + 26);

	printf("1 <= 0? %d\n", 1 <= 0);
	printf("8 <= -18 + 26? %d\n\n", 8 <= -18 + 26);

	printf("!1: %d\n-18 && 26: %d\n1 && 0: %d\n1 || 0: %d\n\n", !1, -18 && 26, 1 && 0, 1 || 0);

	printf("-2 > 5 && 0 < 7 || 0 == 0: %d\n", -2 > 5 && 0 < 7 || 0 == 0);

	return 0;
}
