#include <stdio.h>

int main(void) {
	printf("start in main\n");
	
	

	printf("end in main\n");
	return 0;
}

void funnc() {
	char* str = "function's string.";
	printf("%s\npoint: %p\n", &str);
}
