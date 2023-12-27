#include <stdio.h>

#include "stdactions.h"
int operation(int (*)(int, int), int, int);
double s_operation(double (*)(double, double), double, double);

//int (*operations[5]) (int, int) = { plus, minus, star, slash, percent };
//double (*s_operations[4]) (double, double) = { add, subtract, product, division };
//const int operations_length = 5; //sizeof(operations) / sizeof(*operations);
//const int s_operations_length = 4; //sizeof(s_operations) / sizeof(*s_operations);

int main(void) {
	int left = 246;
	int right = 874;
	double s_left = 42326.5;
	double s_right = 2463.234;
	for (int i = 0; i < operations_length; i++) printf("operation #%d:\t%d operation %d: %d\n", i, left, right, operation(operations[i], left, right));
	printf("\n");
	for (int i = 0; i < s_operations_length; i++) printf("s_operation #%d:\t%lf operation %lf: %lf\n", i, s_left, s_right, s_operation(s_operations[i], s_left, s_right));
	return 0;
}

int operation(int (*func)(int, int), int left, int right) { return func(left, right); }
double s_operation(double (*s_func)(double, double), double left, double right) { return s_func(left, right); }