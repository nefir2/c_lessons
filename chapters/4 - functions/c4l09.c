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

int operation(int (*)(int, int), int, int);
double s_operation(double (*)(double, double), double, double);

void check_to(char*, int (*)(int), int[], int);
int is_odd(int);
int is_even(int);
int is_negative(int);
int is_positive(int);
void show_array(char*, int[], int);

int (*select(int))(int, int);
double (*s_select(int))(double, double);



static int zero();
int (*func(void))(void);

int main(void) {
	int first = 2463;
	int second = 34723457;
	double s_first = 3424647247.234736;
	double s_second = 357.5646354627;
	//int res = operation(plus, first, second);
	//int s_res = s_operation(division, s_first, s_second);
	printf("plus(%d, %d): %d\ndivision(%lf, %lf): %lf\n", first, second, operation(plus, first, second), s_first, s_second, s_operation(division, s_first, s_second));

	int nums[18] = { 3, 456, -35673, 23, 3567, -47, 456, 463, 3567, -234, 357, -357, -246, -2474, 246, 2467276, -8358, 2375 };
	int nums_size = sizeof(nums) / sizeof(*nums);
	show_array("whole array: ", nums, nums_size);
	printf("\n");
	check_to("is even: ", is_even, nums, nums_size);
	check_to("is odd: ", is_odd, nums, nums_size);
	check_to("is positive: ", is_positive, nums, nums_size);
	check_to("is negative: ", is_negative, nums, nums_size);
	printf("\n");

	int (*choice)(int, int);
	choice = select(1);
	printf("selected plus. plus(%d, %d): %d", choice(first, second));
	double (*s_choice)(double, double);
	s_choice = s_select(3);
	printf("selected ???. ???(%lf, %lf): %lf", s_first, s_second, s_choice(s_first, s_second));

	////untested
	//int (*actions[])() = {action1, action2, action3};

	return 0;
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

int operation(int (*oper)(int, int), int left, int right) { return oper(left, right); }
double s_operation(double (*oper)(double, double), double left, double right) { return oper(left, right); }

void check_to(char* message, int (*condition)(int), int array[], int length) {
	printf("%s\t", message);
	for (int i = 0; i < length; i++) if (condition(array[i])) printf("%8d ", array[i]);
	printf("\n");
}

int is_odd(int num) { return !(num % 2 == 0); }
int is_even(int num) { return num % 2 == 0; } //!is_odd(num)
int is_negative(int num) { return num < 0; }
int is_positive(int num) { return num > 0; } //!is_negative(num)

void show_array(char* message, int array[], int length) {
	printf("%s\t", message);
	for (int i = 0; i < length; i++) printf("%8d ", array[i]);
	printf("\n");
}

int (*select(int choice))(int, int) { //returns a pointer to function with type "int(*)(int, int)"
	switch (choice) {
		case 2: return minus;
		case 3: return star;
		case 4: return slash;
		case 5: return percent;
		default: return plus;
	}
}

double (*s_select(int choice))(double, double) { //typeof_returnable_function (*name_of_function(arguments))(arguments_for_returnable_function) //int (*func(void))(void)
	switch (choice) {
		case 2: return subtract;
		case 3: return product;
		case 4: return division;
		default: return add;
	}
}


//untested
static int zero() { //hidden function
	return 1;
}
int (*func(void))(void) { //returns hidden function
	return zero;
}