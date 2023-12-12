#include <stdio.h>

int main(void) {
	int array[] = { 1, 2, 3, 4, 5 };
	printf("*array = %d\n", *array);
	
	printf("sizeof int: %d\nsizeof *array: %d\n", sizeof(int), sizeof(*array));
	double array1[] = { 1, 2, 3, 4, 5 };
	printf("sizeof double: %d\nsizeof *array1: %d\n", sizeof(double), sizeof(*array1));

	for (int i = 0; i < sizeof(array) / sizeof(*array); i++) printf("%d. sizeof array: %d\tsizeof *array: %d\t*(array + i): %d\tarray[i]: %d\n", i, sizeof(array), sizeof(*array), *(array + i), array[i]);
	//array++; //won't compile
	//array = &array1; //won't too. 
	
	int array2[15];
	printf("sizeof array2: %d\tsizeof *array2: %d\tsizeof(array2) / sizeof(*array2): %d\n\n", sizeof(array2), sizeof(*array2), sizeof(array2) / sizeof(*array));
	
	printf("empty array2:\n");
	for (int i = 0; i < sizeof(array2) / sizeof(*array2); i++) printf("array2[%d]: %d\n", i, *(array2 + i));
	printf("\n");

	int* ptr = array;
	ptr += 2;
	*ptr = 1337;
	printf("*(ptr+2): %d\tarray[2]: %d\n", *ptr, *(array + 2));

	*array = 1;
	printf("ptr[-2]: %d\n\n", ptr[-2]);

	char* str = "string value";
	printf("%s\n", str);

	for (int* pointer = array; pointer <= array + sizeof(array) / sizeof(*array); pointer++) printf("pointer: %p \t value: %d\n", (void*)pointer, *pointer);

	int manydimension[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	printf("size of manydimension: %d \t size of *manydimension: %d \t size of **manydimension: %d\n", sizeof(manydimension), sizeof(*manydimension), sizeof(**manydimension));
	int rows = sizeof(manydimension) / sizeof(*manydimension);
	int columns = sizeof(*manydimension) / sizeof(**manydimension);

	printf("manydimension rows' length: %d\nmanydimension columns' length: %d\n", rows, columns);

	for (int i = 1, * pointer = *manydimension; pointer < *manydimension + rows * columns; i++, pointer++) {
		printf("%5d", *pointer);
		if (i % columns == 0) printf("\n");
	}
	printf("\n\n");
	for (int i = 0, * pointer = *manydimension; i < rows * columns; ) {
		printf("%5d", *pointer++);
		if (++i % columns == 0) printf("\n");
	}

	return 0;
}
