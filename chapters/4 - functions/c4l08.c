#include <stdio.h>

int plus(int, int);
int minus(int , int);
int star(int, int);
int slash(int, int);
int percent(int, int);

double add(double, double);
double subtract(double, double);
double product(double, double);
double division(double, double);

void any_first();
void any_second();

int main() {
	//void* show(void); //not pointer to function. it's prototype for function.
	void (*show) (void); //pointer for any function, that returns "void" and gets args "void".
	//show(); //core dump
	show = any_first; //not "show = any_first()".
	show(); //execution of saved function in pointer.
	show = any_second;
	show();

	int first = 346;
	int second = 457;
	int (*operation)(int, int);
	operation = plus;
	printf("\noperation(%d, %d): %d\n", first, second, operation(first, second));
	operation = minus;
	printf("operation(%d, %d): %d\n", first, second, operation(first, second));
	
	//type (*name_of_pointer_to_function[length])(arguments);
	int (*operations[]) (int, int) = { plus, minus, star, slash, percent };
	double (*s_operations[]) (double, double) = { add, subtract, product, division };
	
	double s_left = 273455.0;
	double s_right = 57347.57;
	int oper_l = sizeof(operations) / sizeof(*operations);
	int s_oper_l = sizeof(s_operations) / sizeof(*s_operations);
	printf("size of operations: %d\t size of *operations: %d\tlength: %d\nsize of super operations: %d\tsize of *(super operations): %d\tlength: %d\n", sizeof(operations), sizeof(*operations), oper_l, sizeof(s_operations), sizeof(*s_operations), s_oper_l);
	for (int i = 0; i < oper_l; i++) printf("operation(%d, %d): %d\n", first, second, (*(operations + i))(first, second));
	printf("\n");
	for (int i = 0; i < s_oper_l; i++) printf("s_operation(%lf, %lf): %lf\n", s_left, s_right, (*(s_operations + i))(s_left, s_right));

	return 0;
}

void any_first() {
	printf("first method\n");
}

void any_second() {
	printf("second method\n");
}

int plus(int left, int right) { return left + right; }
int minus(int left, int right) { return left - right; }
int star(int left, int right) { return left * right; }
int slash(int left, int right) { return left / right; }
int percent(int left, int right) { return left % right; }

double add(double left, double right) { return left + right; }
double subtract(double left, double right) { return left - right; }
double product(double left, double right) { return left * right; }
double division(double left, double right) { return left / right; }