#include <stdio.h>

void incr(int);
void point_incr(int*);
void swap(int*, int*);
int cube(const int*);
int arr_summ(int, int*);
void foreach_cube(int, int*);
void show_array(char*, int, int*);
void half_array(int, int*);

int main(void) {
	int x = 0;
	printf("main:\tint x = %d\n", x);
	incr(x);
	printf("main:\tx: %d\n\n", x);

	int y = 0;
	printf("main:\tint y = %d\n", y);
	point_incr(&y);
	printf("main:\ty: %d\n", y);
	
	swap(&x, &y);
	printf("\nswap(*x, *y):\tx: %d\ty: %d\n", x, y);
	
	int z = x + x;
	printf("\nint z = x + x\tcube(&z): %d\n", cube(&z));

	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int arr_size = sizeof(arr) / sizeof(*arr);
	show_array("array", arr_size, arr);
	int as = arr_summ(arr_size, arr);
	printf("summ of array's values: %d\n", as);
	foreach_cube(arr_size, arr);
	show_array("cube foreach value in array", arr_size, arr);
	
	half_array(arr_size, arr);
	show_array("half array", arr_size, arr);
	
	return 0;
}

void incr(int x) {
	x++;
	printf("incr(x):\tx: %d\n", x);
}

void point_incr(int *y) {
	(*y)++;
	printf("point_incr(*y):\ty: %p\t*y: %d\n", (void*)y, *y);
}

void swap(int* left, int* right) {
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

int cube(const int* num) {
	//*num = *num + *num; //cannot
	return (*num) * (*num);
}

int arr_summ(int length, int* array) {
	int summ = 0;
	for (int i = 0; i < length; i++) {
		//printf("summ: %d\telem: %p\t*elem: %d\n", summ, array + i, *(array + i));
		summ += *(array + i);
	}
	return summ;
}

void foreach_cube(int length, int* array) {
	for (int i = 0; i < length; i++) *(array + i) = cube(array + i);
}

void show_array(char* name, int length, int* array) {
	printf("%s:\t", name);
	for (int i = 0; i < length; i++) printf("%3d ", *(array + i));
	printf("\n");
}

void half_array(int l, int* elem) {
	for (int i = 0; i < l; i++) {
		*elem = *elem / 2; //changing value in array.
		elem++; //next element in array
	}
}
