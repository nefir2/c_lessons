#include <stdio.h>

int main(void) {
	//scanf("%d", );
	////%c - char
	////%d - digit
	////%i - any count system
	////%u - unsigned
	////%e - exponent
	////%E - exponent with caps
	////%f, %F, %g, %G - float
	////%x, %X - hexadecimal
	////%s - string
	////%% - percent symbol
	
	// * - idk what it doing
	
	//for %d:
	//	%hd - short int
	//	%ld - long int
	//	%lf, %le - long double
	int someInt;
	printf("input some int: ");
	scanf("%d", &someInt);
	
	printf("some int is equals: %d", someInt);	

	return 0;
}
