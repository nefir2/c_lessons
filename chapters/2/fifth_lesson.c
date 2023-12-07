#include <stdio.h>

int main(void) {
	int n = 2;
	printf("%d\n", n);
	n = 13251;
	printf("%d\n\n", n);

	const int n1 = 2; //unchangable.
	//n1 = 5; //doesn't compiles.
	


	return 0;
}
