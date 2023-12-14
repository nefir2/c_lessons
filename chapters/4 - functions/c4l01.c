#include <stdio.h>

int plus(int, int); //the prototype, or header.
int zero(void); //if no args - headers must have void arg.

void not_not_first() {
	printf("pointless function");
}

int main(void) {
	not_not_first();
	return 0;
}

int plus(int left, int right) {
	return left + right;
}

int zero() {
	return (int)0;
}
