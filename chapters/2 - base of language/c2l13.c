#include <stdio.h>

int main(void) {
	const int size = 4;
	int nums[size];
	nums[2] = 5;
	nums[0] = 128;
	for (int i = 0; i < size; i++) nums[i] = size - i;
	for (int i = 0; i < size; i++) printf("nums[%d] = %d\n", i, nums[i]);
	
	int nums2[4] = { 1, 3, 138, 754 };

	int nums3[] = { 1, 753, 3625, 5762, 876, 234, 27, 5 };

	int nums4[7] = { 1, 53, 64 }; // all other should be "0" value.
	
	int nums5[][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 }, { 7, 8 } }; //cannot be without any assigned bounds.

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("nums5[%d][%d] = %d ", i, j, nums5[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	char str[] = "string array"; //it's \0 at the end of string.
	printf("symbols:\n");
	for (int i = 0; i < 13; i++) printf("\t%2c ", str[i]);
	printf("\ndigitals:\n");
	for (int i = 0; i < 13; i++) printf("\t%2d ", str[i]);
	printf("\n");
	char str2[] = { 'c', 'h', 'a', 'r', ' ', 'a', 'r', 'r', 'a', 'y', '\0' };
	printf("%s\n\n", str2);

	printf("sizeof(str2): %d\nsizeof(char): %d\nsizeof(str2)/sizeof(char): %d\nsizeof(str2[0]): %d\n", sizeof(str2), sizeof(char), sizeof(str2) / sizeof(char), sizeof(str2[0]));
	for (int i = 0; i < sizeof(str2) / sizeof(char); i++) printf("\t%c (%d)\n", str2[i], str[i]);

	//product of matrixes.
	const int r1 = 3, c1r2 = 2, c2 = 1;
	int matrix1[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	int matrix2[2][1] = { { 10 }, { 20 } };
	int matmult[r1][c2];
	for (int i = 0; i < r1; i++) {
	  for (int j = 0; j < c2; j++) {
	    matmult[i][j] = 0;
	  }
	}

	for (int i = 0; i < r1; i++) {
	  for (int j = 0; j < c2; j++) {
	    for (int k = 0; k < c1r2; k++) matmult[i][j] = matmult[i][j] + matrix1[i][k] * matrix2[k][j];
	  }
	}
	printf("result:\n");
	for (int i = 0; i < r1; i++) {
	  for (int j = 0; j < c2; j++) printf("%d ", matmult[i][j]);
	  printf("\n");
	}
	return 0;
}
