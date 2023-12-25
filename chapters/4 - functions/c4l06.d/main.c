#include <stdio.h>

char* message = "some message in \"message\" variable, that have a type \"char*\".\n";

void show() {
	printf("\"show()\" method without any return.\n");
}

int calc(int left, char sign, int right) {
	switch (sign) {
		case '+': return left + right;
		case '-': return left - right;
		case '*': return left * right;
		case '/': return left / right;
		case '%': return left % right;
		default: return 0;
	}
}

static void use_calc() {
	printf("1 + 2: %i\n5 + 7: %i\n136 - 6: %i\n", calc(1, '+', 2), calc(5, '+', 7), calc(136, '-', 6));
}
