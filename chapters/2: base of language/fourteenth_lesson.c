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
	scanf("%d", &someInt); //somehow it sets \n at end of reading line.
			       //i think it's because of user, that pressing enter at the end of inputting.
	printf("some int is equals: %d\n\n", someInt);

	printf("input long int digit: ");
	long int digit;
	scanf("%ld", &digit);
	printf("input some data number with float point: ");
	double fl;
	scanf("%lf", &fl);
	printf("inputted long: %ld\ninputted float(double): %lf\n\n", digit, fl);

	printf("input digits (int, long, double) separated by spaces: ");
	scanf("%d %ld %lf", &someInt, &digit, &fl);
	printf("you wrote:\n\tint: %d\n\tlong: %ld\n\tdouble: %lf\n\n", someInt, digit, fl);

	char str[10];
	printf("input string value (max length = 10): ");
	scanf("%10f", str); //without & because arrays - pointers
	printf("str[10] = ");
	for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++) printf("%c ", str[i]);
	printf("\n\n");

	//space reader:
	char str2[20];
	printf("input some string with spaces (max length = 20): ");
	scanf("%10[^\n]", str2); //reading while not newline, or max length.
	printf("you wrote: %s\n", str2);


	return 0;
}
