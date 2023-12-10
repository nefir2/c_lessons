#include <stdio.h>

void main(void) {
	for (int i = 0; i <= 5; i++) {
		printf("%d ", i);
	}
	printf("\n\n");

	for (int i = 0; i <= 10; i++) printf("%d * %d = %d\n", i, i, i * i);
	printf("\n");

	int x = 5;
	for ( ; x > -10; ) {
		printf("%d >> %d -1 = %d\n", i, i, i >> (i - 1));
		x--;
	}
	printf("\n");

	for (int i = 0; i < 10; i++){
		for (int j = 0; i < 10; i++) printf("%3d ", i * j);
		printf("\n");
	}
	printf("\n\n");
	
	do {
		printf("%d ", x);
		x++;
	} while (x < 20);
	printf("\n\n");

	do {
		printf("x must be under 10, but: %d", x);
		x++;
	} while (x < 10);
	printf("\n\n");

	while (x < 10) {
		printf("%d ", x);
		x++;
	}
	printf("\n");

	for (;;) {
		printf("%d ", x);
		if (x < 0) break;
		x--;
	}
	printf("\n\n");
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 1) continue;
		printf("%d ", i);
	}
}
