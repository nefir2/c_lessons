#include <stdio.h>

#include "stdactions.h"
int operation(int (*)(int, int), int, int);
double s_operation(double (*)(double, double), double, double);

int main() {
	int left = 246;
	int right = 874;
	double s_left = 42326.5;
	double s_right = 2463.234;
	
	return 0;
}

int operation(int (*func)(int, int), int left, int right) { return func(left, right); }
double s_operation(double (*s_func)(double, double), double left, double right) { return s_func(left, right); }
