#include <stdio.h>

void print_ans(int, char, int);
int change_value(int);
int do_not_change_value(const int);

int main(void) {
	print_ans(1, '-', -10);
	print_ans(100, '/', 4);
	print_ans(10000, '*', 1000004576);
	print_ans(468, '/', 0); //may be won't compile //it returned an "inf" value....
	print_ans(87645356, '+', -4573473456); //int overflow in right value. sets max value instead.i
	print_ans(145634.674, '*', 2466756.4237457); //there's wasn't any warnings.
	
	int x = 821;
	int y = change_value(x); //doesn't changes the argument.
				 //if float, then makes double. same to: char and short int, that become integer.

	printf("x: %d\ny: %d\n", x, y);
	printf("do_not_change_value(x): %d", do_not_change_value(x));
	return 0;
}

void print_ans(int left, char sign, int right) {
	switch (sign) {
		case '+':
			printf("%d %c %d = %d\n", left, sign, right, left + right);
			break;
		case '-':
			printf("%d %c %d = %d\n", left, sign, right, left - right);
			break;
		case '*':
			printf("%d %c %d = %lf\n", left, sign, right, (double)left * (double)right);
			break;
		case '/':
			printf("%d %c %d = %lf\n", left, sign, right, (double)left / (double)right);
			break;
		default:
			printf("inputted numbers: %d, %d.\ninputted sign: %c.\naccessed signs: +, -, *, /.\n");
			break;		
	}
}

int change_value(int value) { //copies getted value.
	value = value + 4532;
	return value;
}
int do_not_change_value(const int value) {
	//value += value; //won't compiles.
	return value;
}	
