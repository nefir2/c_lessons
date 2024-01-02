#include <stdio.h>
#include <stdarg.h> //lib for non-one arguments in func
		    //	void va_start(va_list param, {last_known_argument}); //the start of reading args.
		    //	{type} va_arg(va_list param, {type}); //reading value typed "type" and go to next argument automatically.
		    //	void va_end(va_list param); //end of reading args.

int summ(int, ...); //connot be "int summ(...)", minimum 1 defined arg.

void showln(char*, ...);

int main(void) {
	printf("1. summ({8 elements, \"4\" is last value}): \t %d\n", summ(4, 2457, 456, 73, 456, 734, 568, 345, 4));
	printf("2. summ({{7 elements, \"7\" is last value, but spawns 3 times}}): \t %d\n", summ(7 ,35, 7, 3457, 345, 7, 4567, 7));

	printf("\n\nfunction \"showln\":\n");
	showln("some string with int \"%d\" and float \"%f\" and endline at the end by function", 24, 36.3636);
	return 0;
}

int summ(int n, ...) {
	int res = 0;
	va_list vl;
	va_start(vl, n); //n == length of list? //no. last element in args.
	for (int i = 0; i < n; i++) res += va_arg(vl, int);
	va_end(vl);
	return res;
}

void showln(char* text, ...) {
	int d; //?
	double f; //?
	va_list vl; //variable args
	va_start(vl, text); //start of reading variable args
	
	for (char* c = text; *c; c++) { //this is parser???? //every string have "\0" at the end. if cycle meets this, cycle ends.
		if (*c != '%') { //show char, while it's not a '%'.
			printf("%c", *c);
			continue;
		}

		switch (*++c) { //else switch type of it.
			case 'd': 
				printf("%d", va_arg(vl, int));
				break;
			case 'f':
				printf("%.2lf", va_arg(vl, double));
				break;
			default:
				printf("%c", *c);
				break;
		}
	}
	va_end(vl);
	printf("\n");
}
