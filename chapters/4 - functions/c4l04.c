#include <stdio.h>
#include <stdlib.h>

long double factorial(long double);
long double fibonachi(long double);
int recursivless_fibonachi(int);

int main(int argc, char** argv) {
	long double x;
	if (argc > 1) x = strtol(argv[1], NULL, 10);
	else return 1;
	printf("factorial(%llf): %llf\n", x, factorial(x));
	printf("fibonachi(%llf): %llf\n", x, fibonachi(x));
	return 0;
}

long double factorial(long double number) {
//	printf("%llf\n", number);
	if (number == 1.0l) return number;
	return number * factorial(number - 1.0l); //every time uses this function in new data point. number * facrotial(number - 1) => number * factorial(number - 1) * factorial(number - 2), etc
}

long double fibonachi(long double number) {
	if (number == 0.0l || number == 1.0l) return number;
	return fibonachi(number - 1.0l) + fibonachi(number - 2.0l);
}

int recursivless_fibonachi(int n) {
	int ret = 0;
	int b = 1;
	int tmp;
	for (int i = 0; i < n; i++) {
		tmp = ret;
		ret = b;
		b = b + tmp;
	}
	return ret;
}
