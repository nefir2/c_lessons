#include <stdio.h>

int main(void) {
	//pointers can: "pointer =", "= pointer", "= *pointer", ?"+-*/"?, "==".
	//"pointer =": int* = int*; int* = pointer1; NULL
	int a = 14142;
	int* p = &a;
	printf("value: %d; address: %p; *address: %d\n", a, (void*)p, *p);
	int b = 83421;
	int* p1 = &b;
	printf("value1: %d; address1: %p; *address1: %d\n", b, (void*)p1, *p1);
	p = p1;
	printf("address = address1.\nvalue: %d; address: %p; *address: %d\nvalue1: %d; address1: %p; *address1: %d\n\n", a, (void*)p, *p, b, (void*)p1, *p1);
	int* p2 = NULL;

//	printf("address2: %p; *address2: %d\n\n", (void*)p2, *p2); //will it work? //no.

	p2 = p;
	*p2 = 623;
	printf("address2 = address.\n*address: %d\n*address1: %d\n*address2: %d\n\n", *p, *p1, *p2);

	void* pointer = p;
	printf("pointer: %p\n", pointer);
	printf("pointer's value: %d\n\n", *((int*)pointer)); //void* -> int*; *address => %d.
	
	//pointer is a variable. you can get it's address too.
	void* paddress = &p;
	printf("pointer's value: %p\npointer's address' value: %d\npointer's address: %p\n\n", (void*)p, *p, paddress);

	//> >= < <= == !=
	printf("p == p1: %d\np1 == p2: %d\npaddress > pointer: %d\npointer > NULL: %d\n\n", p == p1, p1 == p2, paddress > pointer, pointer > NULL);
	
	char c = ' ';
	char* p3 = &c;
	p = (int*)p3;
	printf("address3: %p\naddress: %p\n*address(%%c): %c\n*address(%%d): %d\n\n", (void*)p3, (void*)p, *p, *p);
	
	return 0;
}
