#include <stdio.h>

void main(void) {
	printf("9 << 1: %d\n", 9 << 1); //1001 << 1 = 10010
	printf("81 >> 3: %d\n\n", 81 >> 3); //1010001 >> 3 = 1010

	printf("5 | 2: %d\n", 5 | 2); //101 | 010 = 111 // logical *
	printf("6 & 2: %d\n", 6 & 2); //110 & 010 = 10 //logical +
	printf("5 ^ 2: %d\n\n", 5 ^ 2); //101 ^ 010 = 111 //xor
	
	printf("~9: %d\n\n", ~9); //~00001001 = 11110110 //byte inversia
	
	
}
