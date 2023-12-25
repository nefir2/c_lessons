#include <stdio.h>

int main(void) {
	int x = 0;
	incr(x);
	printf("main:\tx: %d\n", x);
	return 0;
}

void incr(int x) {
	x++;
	printf("incr:\tx: %d\n", x);
}
