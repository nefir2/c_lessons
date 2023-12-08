#include <stdio.h>
int main(void) {
	printf("1 \n\\n - newline;\n2 \t\\t - tab\n3 \r\\r - places cursor to start of a line\n4 \\ - slash\n5 \' - apostrophe\n6 \" - quote\n");
	
	//%c - char
	//%s - string
	//%d - digit
	//%i - int
	//%u - unsigned
	//%f %F - float, double
	//%e %E - float, double
	//%g %G - %e/%f %E/%F
	//%o - unsigned octal
	//%x %X - hexadecimal
	//%% - %
	
	float f = 71.2342;
	printf("f = %%f: %f\nf = %%e: %e\n", f, f);
	char c = 'c';
	printf("c = %c\n", c);
	unsigned int ui = 23;
	printf("ui: %u\n", ui);
	printf("%%s: %s\n\n", "some string");
	
	float f1 = 14141.1414;
	printf("f1 = %%4.2f: %4.2f\nf1 = %%f: %f\n\n", f1, f1);

	//h - short int
	//l - signed/unsigned long int
	//ll - signed/unsigned long long int
	//L - long double
	short s = 7100;
	printf("s = %hd\n", s);

	//- - toLeft(?)
	//+ - if it over zero - sets +.
	//  - (space) sets space if it's over zero.
	//# - with "o", "x", "X" shows 0, 0x, 0X. with "f", "g", "G" shows dot
	printf("%d\n% d\n%+d\n%#o\n%#f\n\n", 8, 8, 8, 8, 8.); //8, 8, +8, 8, 8.
	
	printf("%9s %d\n%-9s %d\n", "str", 38, "str", 38);

	return 0;
}
