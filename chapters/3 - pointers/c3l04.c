#include <stdio.h>

void showPtr(int*, char[]);

int main(void) {
	const int zero = 0;	
	int* ptr = &zero;
	//*ptr = 1;
	//printf("zero = %d\n\n", zero); //shows warning about changing constant value, but compiles and works on.	
	//*ptr = 0;

	const int* cnstptr = &zero;
	//*cnstptr = 1; //won't compile. unchangable value because of const before "int*". but address are changable.
	cnstptr = &*ptr;
	showPtr(ptr, "ptr");
	showPtr((int*)cnstptr, "cnstptr");
	int x;
	cnstptr = &x;
	showPtr((int*)cnstptr, "cnstptr");

	int* const cnstvl = &zero;
	showPtr(cnstvl, "cnstvl"); 
	//cnstvl = &x; // no.
	*cnstvl = 1;
	showPtr(cnstvl, "cnstvl");

	const int* const super = &zero;
	//super = &x // no.
	//*super = 1; // no.
	showPtr(super, "super");
	return 0;
}

void showPtr(int* pointer, char name[]) {
	printf("*%s: %d\n%s: %p\n&%s: %p\n\n", name, *pointer, name, (void*)pointer, name, &pointer);
}
