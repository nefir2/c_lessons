#include <stdio.h>

extern char* message;
void show();
int calc(int, char, int);
//static void use_calc();

int main(void) {
	printf("message value: %s\n", message);
	show();
	printf("245 - 256: %d\n", calc(245, '-', 256));

	//use_calc();
	return 0;
}
