#include <stdio.h>

void main(void) {
	char c = 96;
	int d = c;
	// long double > double > float > unsigned long > long > unsigned > int
	
	int a = 4;
	double b = 10; //d = (double)19;
	double res = a + b; //(double)((double)a + b)
	
	int e = 10;
	int c = e / a; // (int)((int)e / (int)a) 
	double d = e / a; // (double)((int)e / (int)a)
	double f = (double)e / (double)a; // (double)((double)e / (double)a)
	printf("e = %d\na = %d\ne / a = %d\ne / a = %f\n(double)e / (double)a = %f\n\n", e, a, c, d, f);

	char g = (char)d;
	printf("c = %d\nc = %%c: %c\nd = %d\ng = %c\ng = %%d: %d\n\n", c, c, d, g, g);
	
	//without data loss:
	//char -> short -> int -> long
	//unsigned char -> unsigned short -> unsigned int -> unsigned long
	//float -> double -> long double
	
	char h = 300; //0000000100101100 -> 00101100
	
}
