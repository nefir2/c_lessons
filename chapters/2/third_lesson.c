#include <stdio.h>

typedef unsigned long long int ullint;

void main(void) {
	//sizes: 1 byte - 8 bits; 2 bytes - 16 bits, etc;
	
	char c; //1 byte of data. range: -128 - 127
	unsigned char uc; //same size. range: 0 - 255
	signed char sc; //same as "char"
	
	short s; //2 bytes. range: -32 768 - 32 767 //same to this is: short int, signed short, signed short int.
	unsigned short us; //same size. range: 0 - 65 535 //same to this is: unsigned short int.
	
	int i; //2 bytes if 32bits os architecture, and 4 bytes if 64bits architecture. range for 32bits same to short, range for 64bits is: -2 147 483 648 - 2 147 483 647 //same to this is: signed int, signed.
	unsigned int ui; //same size. same range if 32bits to unsigned short, if 64bits, then range: 0 - 4 294 967 295 //same to this is: unsigned.
	
	long l; //same size to int in case of 64bits architecture, but without division to architectures. same range to int in case of 64bits. //same to this is: long int, signed long int, signed long.
	unsigned long ul; //same size as unsigned int in case of 64bits, but without division to architectures. same range to unsigned int in case of 64 bits. //same to this is: unsigned int.
	long long ll; //8 bytes. range: -9 223 372 036 854 775 807 - 9 23 372 036 854 775 807 //same to this is: long long int, signed long long int, signed long long.
	unsigned long long ull; //same size. range: 0 - 18 446 744 073 709 551 615 //same to this is: unsigned long long int.
	
	float f; //4 bytes. range: +/- 3.4E-38 - 3.4E+38.
	double d; // 8 bytes. range: +/- 1.7E-308 - 1.7E+308.
	long double ld; //10 bytes. range: +/- 3.4E-4932 - 1.1E+4932.
	
	//void v; //just void value, without any size. i don't know, can compiler compile it? //this is won't compile by gcc.
	
	unsigned int ui1 = 36753656u; //without type conversion
	unsigned int ui2 = 66U;
	printf("ui1: %u\nui2: %u\n\n", ui1, ui2);
	unsigned int ui3 = 356346373; //with type conversion
	

	unsigned short us1 = 1u;
	short s1 = -2;
	long l1 = -33333333l;
	unsigned long ul1 = 44444444ul;
	long long ll1 = -123456789101214ll;
	unsigned long long ull1 = 123456789101214ull;
	printf("us1: %hu\ns1: %d\nl1: %ld\nul1: %lu\nll1: %lld\null1: %llu\n\n", us1, s1, l1, ul1, ll1, ull1);


	//examples for number systems.
	int binary = 0b01001;
	int binary1 = 0b10010;
	int octal = 011;
	int octal1 = 022;
	int decimal = 9;
	int decimal1 = 18;
	int hexadecimal = 0x9;
	int hexadecimal1 = 0x12;
	printf("binary: %d\nbinary1: %d\noctal: %d\noctal1: %d\ndecimal: %d\ndecimal1: %d\nhexadecimal: %d\nhexadecimal1: %d\n\n", binary, binary1, octal, octal1, decimal, decimal1, hexadecimal, hexadecimal1);


	double d1 = 3.1415926;
	printf("d1: %f\n", d1);

	float f1 = 3.14f;
	long double ld1 = 123456.789l;
	printf("f1: %f\nld1: %lf\n\n", f1, ld1); //in some platforms %lf can show 0;
	

	char c1 = 'c';
	printf("c1 as digit: %d\nc1 as char: %c\n", c1, c1);
	char c2 = 127;
	printf("c2 as digit: %d\nc2 as char: %c\n\n", c2, c2);

	
	ullint ull2 = 36734654562527245;
	printf("ull2: %llu\n\n", ull2);


	printf("sizeof(ll1): %d bytes\n\n", sizeof(ll1));
}
