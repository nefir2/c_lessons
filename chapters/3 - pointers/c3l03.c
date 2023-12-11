#include <stdio.h>

int main(void) {
	//+ - ++ --
	int x = (int)('s'+'o'+'m'+'e'+' '+'i'+'n'+'t');
	printf("x = %d\n\n", x);
	int *ptr = &x;
	char ans = ' ';
	while (1) {
		printf("ptr = %p\n*ptr = %d\n", (void*)ptr, *ptr);
		scanf("%c", &ans);
		if (ans == '+') ptr++;
		else if (ans == '-') ptr--;
		else if (ans == 'q') return 2;
		//else return 127;
	}
	return 0;
}
