#include <stdio.h>

int main(void) {
	//data_type* name_of_pointer;
	int* pointer;
	int x;
	x = 127;
	pointer = &x; //pointer = reference to x;

	printf("data address: %p\n", pointer); //pointer works as void*
	printf("data address, but converted to void(void*): %p\n", (void*)pointer);
	printf("data address as digit(%%d): %d\n", pointer);
	printf("value in data address(*pointer): %d\n\n", *pointer); //dereference operator
	
	int a = *pointer; //a = value in x variable;
	*pointer = 1;
	printf("x: %d\n", x);

	
	
	return 0;
}
