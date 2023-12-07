#include <stdio.h>

int main(void) {
	int a, b, c;
	a = b = c = 123 + 4;
	printf("a %= b: %d\n", a %= b);
	printf("a >>= b: %d\n", a >>= b);
	printf("a |= b: %d\n", a |= b);
	return 0;
}
